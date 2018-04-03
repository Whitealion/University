#include "Lampa.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void create_lamp(vector<Lampa> &vect) {
	bool choice;

	cout << "Lamp insertion program" << endl;
	cout << "Do you want to immediately insert the lamp's model name? (y = 1/n = 0)" << endl;
	cin >> choice;
	cin.ignore();

	string model;
	if (choice) {
		cout << "Write the lamp's model name: ";
		getline(cin, model);
		Lampa lamp(model);
		vect.push_back(lamp);
	}
	else {
		Lampa lamp;
		vect.push_back(lamp);
	}
}

int main() {
	vector<Lampa> vect;
	bool cont = false;

	do {
		create_lamp(vect);

		cout << vect[0].get_model << endl;
		cout << "Do you want to register another lamp? (y = 1/n = 0)" << endl;
		cin >> cont;
	} while (cont);

	return 0;
}