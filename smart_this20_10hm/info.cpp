#include <iostream>
#include "Zoo.h"
#include "Lenivikotik.h"
#include "Pingvin.h"
#include "Owl.h"
#include "Dog.h"
#include <list>
using namespace std;


int main() {
	Lenivikotik lenivikotik("elephant", "poroda", "hot and tropical climates", "big and lazy and dengerous", "thick skin");
	Pingvin pingvin("pingvin agressiv", "poroda", "cold edges", "average", "warm wool");
	Owl owl("owl", "poroda", "warmer climes", "small", "can fly");
	Dog dog("dog", "poroda", "city", "small - acerage", "the best friend of human and security");

	list<Zoo> lst;
	list<Zoo>::iterator it;

	bool exit = false;
	int answer;
	string str_name;

	while (exit != true) {
		cout << "1. Add Animal\n2. Delete Animal\n3. Search\n4. Add to position\n5. Show\n6. Edit\n7. Exit\n-> ";
		cin >> answer;
		switch (answer) {
		case 1:
			cout << "\nChoose one of these:\n";
			cout << "1. Lenivikotik\n2. Pingvin\n3. Owl\n4. Dog\n-> ";
			int ans;
			cin >> ans;
			if (ans == 1) {
				lst.push_back(lenivikotik);
			}
			else if (ans == 2) {
				lst.push_back(pingvin);
			}
			else if (ans == 3) {
				lst.push_back(owl);
			}
			else if (ans == 4) {
				lst.push_back(dog);
			}
			else {
				cout << "Uncorrect answer!" << endl;
			}
			cout << endl;
			break;
		case 2:
			lst.pop_back();
			break;
		case 3:
			cin >> str_name;
			if (str_name == "elephant" || str_name == "lenivikotik") {
				lenivikotik.Print();
			}
			else if (str_name == "pingvin" || str_name == "pingvin") {
				pingvin.Print();
			}
			else if (str_name == "owl" || str_name == "owl") {
				owl.Print();
			}
			else if (str_name == "dog" || str_name == "Dog") {
				dog.Print();
			}
			cout << endl << endl;
			break;
		case 4:
			lst.splice(lst.begin(), lst, prev(lst.end()));
			lst.splice(lst.end(), lst, next(lst.begin()));
			break;
		case 5:
			for (it = lst.begin(); it != lst.end(); it++) {
				cout << *it << endl;
			}
			cout << endl;
			break;
		case 6:
			cout << "\nEnter name: ";
			cin >> str_name;
			if (str_name == "elephant" || str_name == "lenivikotik") {
				lenivikotik.Input(lenivikotik);
				break;
			}
			else if (str_name == "pingvin" || str_name == "pingvin") {
				pingvin.Input(pingvin);
				break;
			}
			else if (str_name == "owl" || str_name == "owl") {
				owl.Input(owl);
				break;
			}
			else if (str_name == "dog" || str_name == "Dog") {
				dog.Input(dog);
				break;
			}
			cout << endl;
			break;
		case 7:
			exit = true;
			break;
		}
	}
}