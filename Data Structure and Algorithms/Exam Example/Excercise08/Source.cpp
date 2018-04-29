#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
using namespace std;

void load(ifstream &in, map<string, string> &m) {
	string line;
	string code;
	string name;

	getline(in, line);
	while (getline(in, line)) {
		stringstream ss(line);
		getline(ss, name, ';');
		getline(ss, code);

		m[code] = name;
	}
}

void guess(map<string, string> &m) {
	bool cont;

	do {
		cout << "Insert a country's code: ";
		string code;
		getline(cin, code);

		auto found = m.find(code);

		if (found != m.end()) {
			cout << found->first << ": " << found->second << endl;
		}
		else {
			cout << "Country with the code " << code << " not found" << endl;
		}

		cout << "Continue? (1/0) ";
		cin >> cont;
		cin.ignore();
	} while (cont);
}

int main() {

	ifstream in("Sifre_drzava.csv");
	if (!in) {
		cout << "File reading error!" << endl;
		return 1;
	}

	map<string, string> countries;
	load(in, countries);
	
	guess(countries);

	return 0;
}