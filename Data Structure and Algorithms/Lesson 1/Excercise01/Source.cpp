#include <iostream>
#include "Osoba.h"
using namespace std;

int main() {
	Osoba o("milica", "krmpotic", 123);
	o.set_oib(111);
	cout << o.to_string() << endl;
	return 0;
}