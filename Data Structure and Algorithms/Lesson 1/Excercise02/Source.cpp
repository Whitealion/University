#include <iostream>
#include <fstream>
#include "Pravokutnik.h"
using namespace std;

void Unos(Pravokutnik a[]) {
	int x, y;

	for (int i = 0; i < 5; i++) {
		cout << "Unesite sirinu za " << i + 1 << ". pravokutnik: ";
		cin >> x;
		cout << "Unesite visinu za " << i + 1 << ". pravokutnik: ";
		cin >> y;
		a[i].set_sirina(x);
		a[i].set_visina(y);
	}

}

void toFile(Pravokutnik a[]) {
	ofstream dat("Pravokutnik.txt");

	if (dat.is_open()) {
		for (int i = 0; i < 5; i++) {
			dat << "P(" << a[i].get_sirina() << ", " << a[i].get_visina() << ") = " << a[i].get_sirina() * a[i].get_visina() << endl;
		}
		cout << "Data written to file correctly!" << endl;
	}
	else {
		cout << "File writing error!" << endl;
	}

	dat.close();
}

int main() {
	Pravokutnik arr[5];
	Unos(arr);
	toFile(arr);
	return 0;
}