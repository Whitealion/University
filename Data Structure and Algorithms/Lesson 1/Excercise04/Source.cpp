#include <iostream>
#include "Brzina.h"
using namespace std;

int main() {
	Brzina x;
	int odabir;
	
	cout << "Mogucnosti odabira: " << endl;
	cout << "1. Veca brzina" << endl;
	cout << "2. Manja brzina: " << endl;
	
	cout << x.to_string() << endl;
	do {
		cout << "Unesite odabir: ";
		cin >> odabir;
		if (odabir == 1) {
			x.uVecu();
		}
		else if (odabir == 2) {
			x.uManju();
		}
		else {
			return 1;
		}
		cout << x.to_string() << endl;
	} while (odabir == 1 || odabir == 2);

	return 0;
}