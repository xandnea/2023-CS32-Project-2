#include "Set.h"
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main() {

	//Set s;

	//cerr << "s size: " << s.size() << endl;
	//cerr << "s empty: " << s.empty() << endl;

	//s.insert(2);
	//cerr << "s set dump of " << s.size() << " elements" << endl;
	//s.dump();
	//cerr << "s size: " << s.size() << endl;
	//cerr << "s empty: " << s.empty() << endl;
	//
	//s.insert(1);
	//cerr << "s set dump of " << s.size() << " elements" << endl;
	//s.dump();

	//s.insert(4);
	//s.insert(0);
	//s.insert(3);
	//s.insert(4);
	//s.insert(3);
	//s.insert(8);
	//s.insert(4);
	//s.insert(6);
	//s.insert(0);
	//s.insert(0);
	//s.insert(0);

	//cerr << "s set dump of " << s.size() << " elements" << endl;
	//s.dump();

	//Set s2(s);

	//cerr << "s2 set dump of " << s2.size() << " elements" << endl;
	//s2.dump();
	//int temp = -1;
	//s2.get(6, temp);
	//cerr << "get from set test pos: " << temp << endl;
	//temp = -1;
	//s.get(7, temp);
	//cerr << "get from set s pos: " << temp << endl;

	//cerr << "s size: " << s.size() << endl;
	//cerr << "s empty: " << s.empty() << endl;
	//cerr << endl;

	//int x = -1;
	//cerr << "x is " << x << endl;
	//s.get(6, x);
	//cerr << "x is " << x << endl;
	//cerr << endl;

	//s.erase(6);
	//cerr << "s set dump of " << s.size() << " elements" << endl;
	//s.dump();

	//s.erase(8);
	//cerr << "s set dump of " << s.size() << " elements" << endl;
	//s.dump();
	//
	//s.erase(0);
	//cerr << "s set dump of " << s.size() << " elements" << endl;
	//s.dump();

	//s.erase(10);
	//cerr << "s set dump of " << s.size() << " elements" << endl;
	//s.dump();

	//cerr << "s size: " << s.size() << endl;
	//cerr << endl;

	//Set s3;
	//s3.insert(4);
	//s3.insert(10);
	//s3.insert(5);
	//
	//cerr << "s3 set dump of " << s3.size() << " elements" << endl;
	//s3.dump();

	//s3 = s2;
	//cerr << "s3 set dump of " << s3.size() << " elements" << endl;
	//s3.dump();
	//cerr << "s set dump of " << s.size() << " elements" << endl;
	//s.dump();


	//s3.swap(s);
	//cerr << "s3 set dump of " << s3.size() << " elements" << endl;
	//s3.dump();
	//cerr << "s set dump of " << s.size() << " elements" << endl;
	//s.dump();

	//Set s4;
	//s4.insert(10);
	//s4.insert(20);
	//s4.insert(1);
	//s4.insert(3);
	//s4.insert(9);
	//s4.insert(7);
	//s4.insert(0);
	//s4.erase(20);

	//cerr << "s3 set dump of " << s3.size() << " elements" << endl;
	//s3.dump();

	//cerr << "s4 set dump of " << s4.size() << " elements" << endl;
	//s4.dump();

	//Set s3ands4;
	//unite(s3, s4, s3ands4);
	//cerr << "UNITE - s3ands4 set dump of " << s3ands4.size() << " elements" << endl;
	//s3ands4.dump();

	//butNot(s3, s4, s3ands4);
	//cerr << "BUTNOT - s3ands4 set dump of " << s3ands4.size() << " elements" << endl;
	//s3ands4.dump();

	//butNot(s4, s3, s3ands4);
	//cerr << "BUTNOT - s4ands3 set dump of " << s3ands4.size() << " elements" << endl;
	//s3ands4.dump();

	//Set s4ands4;
	//unite(s4, s4, s4ands4);
	//cerr << "UNITE - s4ands4 set dump of " << s4ands4.size() << " elements" << endl;
	//s4ands4.dump();

	//butNot(s4, s4, s4ands4);
	//cerr << "BUTNOT - s4ands4 set dump of " << s4ands4.size() << " elements" << endl;
	//s4ands4.dump();

	//Set s5;
	//Set s6;

	//Set s5ands6;
	//unite(s5, s6, s5ands6);
	//cerr << "UNITE - s5ands6 set dump of " << s4ands4.size() << " elements" << endl;
	//s4ands4.dump();

	//butNot(s5, s6, s5ands6);
	//cerr << "BUTNOT - s5ands6 set dump of " << s4ands4.size() << " elements" << endl;
	//s4ands4.dump();

	//swap(s5, s6);
	//cerr << "s5 dump after swap with " << s5.size() << " elements" << endl;
	//s5.dump();
	//cerr << "s6 dump after swap with " << s6.size() << " elements" << endl;
	//s6.dump();

	//s5.insert(0);
	//s5.insert(2);
	//s5.insert(4);
	//s5.insert(6);
	//s5.insert(8);
	//s5.insert(10);

	//s6.insert(1);
	//s6.insert(3);
	//s6.insert(5);
	//s6.insert(7);
	//s6.insert(9);
	//s6.insert(10);

	//cerr << "s5 dump with " << s5.size() << " elements" << endl;
	//s5.dump();
	//cerr << "s6 dump with " << s6.size() << " elements" << endl;
	//s6.dump();

	//unite(s5, s6, s5ands6);
	//cerr << "UNITE - s5ands6 set dump of " << s5ands6.size() << " elements" << endl;
	//s5ands6.dump();

	//butNot(s5, s6, s5ands6);
	//cerr << "BUTNOT - s5ands6 set dump of " << s5ands6.size() << " elements" << endl;
	//s5ands6.dump();

	//s5.swap(s6);
	//cerr << "s5 dump after swap with " << s5.size() << " elements" << endl;
	//s5.dump();
	//cerr << "s6 dump after swap with " << s6.size() << " elements" << endl;
	//s6.dump();

Set s;

// testing for if size and empty work on an empty set
cerr << "s size: " << s.size() << endl;
cerr << "s empty: " << s.empty() << endl;

// tests inserting, dumping, and the effect of inserting on the other variables
s.insert("hi");
cerr << "s set dump of " << s.size() << " elements" << endl;
s.dump();
cerr << "s size: " << s.size() << endl;
cerr << "s empty: " << s.empty() << endl;

// testing inserting again
s.insert("fail");
cerr << "s set dump of " << s.size() << " elements" << endl;
s.dump();

s.insert("blue");
s.insert("nice");
s.insert("very");
s.insert("blue");
s.insert("nice");
s.insert("epic");
s.insert("blue");
s.insert("sick");
s.insert("trip");
s.insert("trip");
s.insert("trip");

cerr << "s set dump of " << s.size() << " elements" << endl;
s.dump();

Set s2(s);

// testing for get function, ensuring it doesn't work with a pos that is too high or low
cerr << "s2 set dump of " << s2.size() << " elements" << endl;
s2.dump();
string temp = "";
s2.get(6, temp);
cerr << "get from set test pos: " << temp << endl;
temp = "";
s.get(7, temp);
cerr << "get from set s pos: " << temp << endl;
temp = "";
s.get(-1, temp);
cerr << "get from set s pos: " << temp << endl;

cerr << "s size: " << s.size() << endl;
cerr << "s empty: " << s.empty() << endl;
cerr << endl;

// testing for get again
string x = "";
cerr << "x is " << x << endl;
s.get(6, x);
cerr << "x is " << x << endl;
cerr << endl;

// testing for erase 
s.erase("nice");
cerr << "s set dump of " << s.size() << " elements" << endl;
s.dump();

s.erase("trip");
cerr << "s set dump of " << s.size() << " elements" << endl;
s.dump();

s.erase("blue");
cerr << "s set dump of " << s.size() << " elements" << endl;
s.dump();

s.erase("crazy");
cerr << "s set dump of " << s.size() << " elements" << endl;
s.dump();

cerr << "s size: " << s.size() << endl;
cerr << endl;

Set s3;
s3.insert("clam");
s3.insert("face");
s3.insert("rich");

cerr << "s3 set dump of " << s3.size() << " elements" << endl;
s3.dump();

// testing assignment operator
s3 = s2;
cerr << "s3 set dump of " << s3.size() << " elements" << endl;
s3.dump();
cerr << "s set dump of " << s.size() << " elements" << endl;
s.dump();

// testing swap
s3.swap(s);
cerr << "s3 set dump of " << s3.size() << " elements" << endl;
s3.dump();
cerr << "s set dump of " << s.size() << " elements" << endl;
s.dump();

Set s4;
s4.insert("crying");
s4.insert("zebra");
s4.insert("able");
s4.insert("make");
s4.insert("dead");
s4.insert("yeah");
s4.insert("sale");
s4.erase("crying");

cerr << "s3 set dump of " << s3.size() << " elements" << endl;
s3.dump();

cerr << "s4 set dump of " << s4.size() << " elements" << endl;
s4.dump();

// testing unite and butnot on normal sets
Set s3ands4;
unite(s3, s4, s3ands4);
cerr << "unite - s3ands4 set dump of " << s3ands4.size() << " elements" << endl;
s3ands4.dump();

butNot(s3, s4, s3ands4);
cerr << "butnot - s3ands4 set dump of " << s3ands4.size() << " elements" << endl;
s3ands4.dump();

butNot(s4, s3, s3ands4);
cerr << "butnot - s4ands3 set dump of " << s3ands4.size() << " elements" << endl;
s3ands4.dump();

Set s4ands4;
unite(s4, s4, s4ands4);
cerr << "unite - s4ands4 set dump of " << s4ands4.size() << " elements" << endl;
s4ands4.dump();

butNot(s4, s4, s4ands4);
cerr << "butnot - s4ands4 set dump of " << s4ands4.size() << " elements" << endl;
s4ands4.dump();

Set s5;
Set s6;

// testing unite and butnot on empty sets
Set s5ands6;
unite(s5, s6, s5ands6);
cerr << "unite - s5ands6 set dump of " << s4ands4.size() << " elements" << endl;
s4ands4.dump();

butNot(s5, s6, s5ands6);
cerr << "butnot - s5ands6 set dump of " << s4ands4.size() << " elements" << endl;
s4ands4.dump();

// testing swap on empty sets
swap(s5, s6);
cerr << "s5 dump after swap with " << s5.size() << " elements" << endl;
s5.dump();
cerr << "s6 dump after swap with " << s6.size() << " elements" << endl;
s6.dump();

s5.insert("apple");
s5.insert("blame");
s5.insert("crane");
s5.insert("dread");
s5.insert("eight");
s5.insert("mid");

s6.insert("late");
s6.insert("made");
s6.insert("nade");
s6.insert("opus");
s6.insert("poof");
s6.insert("mid");

cerr << "s5 dump with " << s5.size() << " elements" << endl;
s5.dump();
cerr << "s6 dump with " << s6.size() << " elements" << endl;
s6.dump();

// more unite and butnot testing
unite(s5, s6, s5ands6);
cerr << "unite - s5ands6 set dump of " << s5ands6.size() << " elements" << endl;
s5ands6.dump();

butNot(s5, s6, s5ands6);
cerr << "butnot - s5ands6 set dump of " << s5ands6.size() << " elements" << endl;
s5ands6.dump();

s5.swap(s6);
cerr << "s5 dump after swap with " << s5.size() << " elements" << endl;
s5.dump();
cerr << "s6 dump after swap with " << s6.size() << " elements" << endl;
s6.dump();

cerr << "DONE" << endl;
}