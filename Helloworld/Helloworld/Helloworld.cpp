//==================================
// 'auto' deducing the correct type
// and preventing inefficiencies
// @author Amir Kirsh
//==================================

#include <iostream>
#include <string>
#include <map>

using std::cout;
using std::endl;
using std::string;
using std::map;

class Person {
	string name;
public:
	Person(string name1) : name(name1) {}
	Person(const Person& p) : name(p.name) {
		cout << "in copy ctor for " << name << endl;
	}

	friend std::ostream& operator<<(std::ostream& out, const Person& p) {
		return out << p.name;
	}
	bool operator<(const Person& other)const {
		return name < other.name;
	}
};

// main.cpp
int main() {
	// counter of number of lessons a person was in
	map<Person, int> personCount;
	personCount.emplace( "momo" , 1 );
	personCount.emplace( "koko" , 2 );
	//{ "koko" ,  2} };

	// in this example we show how auto is smartly getting the correct type
	// which may be mistakenly stated otherwise if type is selected manually 

	cout << "=========================================" << endl;
	cout << 1 << endl;
	cout << "=========================================" << endl;
	for (const auto& pCount : personCount) {
		cout << pCount.first << ": " << pCount.second << endl;
	}
	cout << "=========================================" << endl;
	cout << 2 << endl;
	cout << "=========================================" << endl;
	for (const std::pair<Person, int>& pCount : personCount) {
		cout << pCount.first << ": " << pCount.second << endl;
	}
	cout << "=========================================" << endl;
	cout << 3 << endl;
	cout << "=========================================" << endl;
	for (const std::pair<const Person, int>& pCount : personCount) {
		cout << pCount.first << ": " << pCount.second << endl;
	}
}

