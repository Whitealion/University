#include "Lampa.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void create_lamp(vector<Lampa> &vect) {
	system("cls");
	bool choice;

	cout << "Lamp insertion" << endl;
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

void modify_lamp(vector<Lampa> &vect) {
	system("cls");
	cout << "Select the lamp to modify (1-" << vect.size() << ")" << endl;
	int lamp;
	cin >> lamp;
	lamp -= 1;

	cout << "Select which value to modify: " << endl
		<< "1. Model name" << endl
		<< "2. Manufacturer name" << endl
		<< "3. Number of bulbs" << endl
		<< "4. Power" << endl;
	int choice;
	cin >> choice;
	cin.ignore();

	cout << "Insert the new value: ";
	string tempstr;
	int tempnum;

	switch(choice) {
	case 1:
		getline(cin, tempstr);
		vect.at(lamp).set_model(tempstr);
		break;
	case 2:
		getline(cin, tempstr);
		vect.at(lamp).set_proizvodac(tempstr);
		break;
	case 3:
		cin >> tempnum;
		vect.at(lamp).set_broj(tempnum);
		break;
	case 4:
		cin >> tempnum;
		vect.at(lamp).set_snaga(tempnum);
		break;
	default:
		break;
	}

	cout << "Modification succeeded!" << endl;
	system("pause");
}

void print(Lampa &l) {
	cout << l.get_model()
		<< "(" << l.get_proizvodac() << ")" << endl
		<< "    " << l.get_broj() << " sijalica, "
		<< l.get_snaga() << "W" << endl << endl;
}

void get_info(vector<Lampa> &vect) {
	system("cls");
	cout << "Select the lamp to see info (1-" << vect.size() << ")" << endl;
	int lamp;
	cin >> lamp;
	lamp -= 1;

	print(vect.at(lamp));
	system("pause");
}

void print_all(vector<Lampa> &vect) {
	system("cls");
	for (unsigned i = 0; i < vect.size(); ++i) {
		cout << i + 1 << "#: "; 
		print(vect.at(i));
	}
	system("pause");
}

int main() {
	vector<Lampa> vect;
	int choice;

	do {
		system("cls");
		cout << "Select action: " << endl
			<< "1. Create lamp" << endl
			<< "2. Modify lamp" << endl
			<< "3. Retrieve lamp" << endl
			<< "4. Visualise all lamps" << endl
			<< "5. End program" << endl;
		cin >> choice;

		if (choice < 1 || choice > 5) {
			cout << "Wrong selection!" << endl;
		}

		switch (choice) {
		case 1:
			create_lamp(vect);
			break;
		case 2:
			modify_lamp(vect);
			break;
		case 3:
			get_info(vect);
			break;
		case 4:
			print_all(vect);
			break;
		case 5:
			break;
		}
	} while (choice != 5);

	return 0;
}