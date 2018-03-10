#include <iostream>
#include "Tocka.cpp"
using namespace std;

void print(Tocka t) {
	cout << "T(" << t.get_x() << ", " << t.get_y() << ")" << endl;
}



int main() {
	Tocka t;
	cout << t.to_string() << endl;
	t.set_x(-1);
	t.set_y(2);

	cout << t.to_string() << endl;
	cout << t.distance() << endl;

	return 0;
}