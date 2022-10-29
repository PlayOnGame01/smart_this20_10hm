#pragma once
#include <iostream>
#include "Zoo.h"
using namespace std;

class Pingvin :public Zoo {
	string name;

public:
	Pingvin() {
		name = nullptr;
	}

	Pingvin(const char* n, const char* pr, const char* ctr, const char* s, const char* p) :Zoo(n, pr, ctr, s, p) {
		name = n;
	}

	void PrintZoo() {
		cout << "Animal name:  " << name << endl;
		this->Print();
	}

};
