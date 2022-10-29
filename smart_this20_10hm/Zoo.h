#pragma once
#include <iostream>
#include <list>
using namespace std;

class Zoo {
	string name;
	string poroda;
	string country;
	string size;
	string peculiarity; 

public:
	Zoo() {
		poroda = nullptr;
		country = nullptr;
		size = nullptr;
		peculiarity = nullptr;
		name = nullptr;
	}

	Zoo(const char* n, const char* pr, const char* ctr, const char* s, const char* p) {
		name = n;
		poroda = pr;
		country = ctr;
		size = s;
		peculiarity = p;
	}

	friend ostream& operator<<(ostream& out, Zoo& obj) {
		cout << "\nName: " << obj.name << endl;
		cout << "Type of animal = " << obj.poroda << endl;
		cout << "Place of animal = " << obj.country << endl;
		cout << "Size of animal = " << obj.size << endl;
		cout << "Peculiarity of animal = " << obj.peculiarity << endl;
		return out;
	}

	void Input(Zoo& obj) {
		cout << "Enter new name: ";
		cin >> obj.name;
		name = obj.name;

		cout << "Enter new type: ";
		cin >> obj.type;
		type = obj.type;

		cout << endl;
	}

	void Print() {
		cout << "Type of animal = " << type << endl;
		cout << "Place of animal = " << continent << endl;
		cout << "Size of animal = " << size << endl;
		cout << "Peculiarity of animal = " << peculiarity << endl;
		cout << "\n\n";
	}

};