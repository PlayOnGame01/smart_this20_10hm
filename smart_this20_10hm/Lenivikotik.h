#pragma once
#include <iostream>
#include "Zoo.h"
using namespace std;

class Lenivikotik :public Zoo {
	string name;

public:
	Lenivikotik() {
		name = nullptr;
	}

	Lenivikotik(const char* n, const char* pr, const char* ctr, const char* s, const char* p) :Zoo(n, pr, ctr, s, p) {
		name = n;
	}

	void PrintZoo() {
		cout << "Animal name:  " << name << endl;
		this->Print();
	}

};