#ifndef SET_H
#define SET_H

#include <string>

//#include "IntWrapper.h"      // TODO: remove this line after testing
//using ItemType = IntWrapper; // TODO: replace this line after testing

using ItemType = std::string;

class Set
{
    public:
        Set();
        bool empty() const;
        int size() const;
        bool insert(const ItemType& value);
        bool erase(const ItemType& value);
        bool contains(const ItemType& value) const;
        bool get(int pos, ItemType& value) const;
        void swap(Set& other);
        void dump() const;

        // Housekeeping functions
        Set(const Set& src);
        Set& operator=(const Set& src);
        ~Set();

    private:
        struct Node {
            ItemType value;

            Node* prev;
            Node* next;
        };

        Node* head;
        int m_size;



};


void unite(const Set& s1, const Set& s2, Set& result);
void butNot(const Set& s1, const Set& s2, Set& result);

#endif // FOR SET_H