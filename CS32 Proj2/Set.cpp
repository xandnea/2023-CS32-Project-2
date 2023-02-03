#include "Set.h"
#include <iostream>

using namespace std;

Set::Set() {
	m_size = 0;
	head = nullptr;
}

bool Set::empty() const {
	if (m_size == 0)
		return true;
	else
		return false;
}


int Set::size() const {
	return m_size;
}

bool Set::insert(const ItemType& value) {
	Node* p = head;

	if (head == nullptr) { // inputs first node if set is empty
		p = new Node();
		p->value = value;
		p->prev = nullptr;
		p->next = head;

		head = p;
		m_size++;
		return true;
	}

	while ((p->next != nullptr) && (p->value <= value)) { // iterates through set and stops either when p points to the end of the list
		if (p->value == value)							  // or when p points to a value greater than the newly inputted value
			return false;					   
		p = p->next;
	}

	if (p->value == value)
		return false;
		
	if ((p == head) && (value < head->value)) { // inputs first node if the newly inputted value is the lowest in the set
		p->prev = new Node();
		p->prev->next = p;
		p = p->prev;
		p->value = value;
		p->prev = nullptr;
		head = p;
		m_size++;
		return true;
	}

	if ((p->next == nullptr) && (value > p->value)) { // inputs last node if the newly inputted value is the greatest in the set
		p->next = new Node();
		p->next->prev = p;
		p = p->next;
		p->value = value;
		p->next = nullptr;
		m_size++;

		return true;
	}
	
	Node* temp = new Node();
	temp->prev = p->prev;
	temp->next = p;
	temp->value = value;
	p->prev->next = temp;
	p->prev = temp;

	m_size++;
	return true;
}

bool Set::erase(const ItemType& value) {
	Node* p = head;

	while ((p != nullptr) && (p->value != value))
		p = p->next;

	if (p == nullptr) // only occurs if the item was not found in the linked list 
		return false;

	if (p->prev == nullptr && p->next == nullptr) { // checks if only item in list
		head = nullptr;
		delete p;
		m_size--;
		return true;
	}

	if (p == head) { // checks for first item in list
		p->next->prev = nullptr;
		head = p->next;
		delete p;
		m_size--;
		return true;
	}

	if (p->next == nullptr) { // checks for last item in list
		p->prev->next = nullptr;
		delete p;
		m_size--;
		return true;
	}

	p->prev->next = p->next; // sets node before p to have its next be the node after p
	p->next->prev = p->prev; // sets node after p to have its prev be the node before p
	delete p;
	m_size--;
	return true;
}

bool Set::contains(const ItemType& value) const {
	Node* p = head;

	while ((p != nullptr) && (p->value != value))
		p = p->next;

	if (p == nullptr) // only occurs if the item was not found in the linked list 
		return false;
	else
		return true;
}

bool Set::get(int pos, ItemType& value) const {
	if ((pos < 0) || (pos > m_size-1) || (head == nullptr)) { return false; }
	
	Node* p = head;
	for (int i = 0; i < pos; i++) {
		p = p->next;
	}

	value = p->value;
	return true;
}

void Set::swap(Set& other) {
	Node* t_pointer = this->head;
	this->head = other.head;
	other.head = t_pointer;
	
	int t_size = this->m_size;
	this->m_size = other.m_size;
	other.m_size = t_size;
}

void Set::dump() const {
	Node* p = head;

	while (p != nullptr) {
		cerr << p->value << endl;
		p = p->next;
	}

	cerr << endl;
}

// Housekeeping functions
Set::Set(const Set& src) {
	this->head = nullptr;
	Node* p = src.head;						// sets a node pointer to be the head of source (src)	
	this->m_size = 0;

	while (p != nullptr) {					// while pointer is not nullptr
		this->insert(p->value);				// insert the value of p into newSet
		p = p->next;						// move pointer to the next node 
	}
}

Set& Set::operator=(const Set& src) {
	Node* p = this->head;					// sets a node pointer to be the head of this
	this->m_size = 0;

	while (p != nullptr) {					// deletes all nodes in this->set
		Node* killme = p;
		p = p->next;
		delete killme;
	}

	this->head = nullptr;					// sets this->head to be null pointer so that nodes can be added again
	p = src.head;							// sets node pointer to be head of source (src)

	while (p != nullptr) {					// while pointer is not nullptr
		this->insert(p->value);				// insert the value of p into newSet
		p = p->next;						// move pointer to the next node 
	}

	return *this;
}


Set::~Set() {
	Node* p = head;

	while (p != nullptr) { 
		Node* killme = p;
		p = p->next;
		delete killme;
	}
}

void unite(const Set& s1, const Set& s2, Set& result) {			// 1 2 3 4 and 1 3 7 9 10 20
	Set temp;
	int size;
	ItemType current;

	size = s1.size();					// sets size to be equal to set 1's size 

	for (int i = 0; i < size; i++) {	// insert each element of set 1 (duplicates should only occur once)
		s1.get(i, current);
		temp.insert(current);
	}

	size = s2.size();

	for (int i = 0; i < size; i++) {	// insert each element of set 2 (duplicates should only occur once)
		s2.get(i, current);
		temp.insert(current);
	}

	result = temp;
}

void butNot(const Set& s1, const Set& s2, Set& result) {
	Set temp;
	int size = s1.size();
	ItemType current;

	for (int i = 0; i < size; i++) {
		s1.get(i, current);
		if (!s2.contains(current))
			temp.insert(current);
	}

	result = temp;
}