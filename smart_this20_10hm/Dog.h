#pragma once
#include <iostream>
#include "Zoo.h"
using namespace std;

class Dog :public Zoo {
	string name;

public:
	Dog() {
		name = nullptr;
	}

	Dog(const char* n, const char* pr, const char* ctr, const char* s, const char* p) :Zoo(n, pr, ctr, s, p) {
		name = n;
	}

	void PrintAnimal() {
		cout << "Animal name:  " << name << endl;
		this->Print();
	}

};