#include <iostream>
#include "Razlomak.h"
using namespace std;

Razlomak Unos() {
	int x, y;

	cout << "Upisite brojnik: ";
	cin >> x;
	cout << "Upisite nazivnik: ";
	cin >> y;
	Razlomak r(x, y);
	return r;
}

int main() {
	Razlomak r;
	bool nastavi;
	int s;

	do {
		r = Unos();
		cout << "Unesite skalar: ";
		cin >> s;
		cout << r.to_string() << " * " << s << " = ";
		cout << r.mnozenje(s) << endl;
		cout << "Dalje (1/0): ";
		cin >> nastavi;
	} while (nastavi);

	return 0;
}