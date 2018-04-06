#include "MyStrVect.h"
#include <iostream>
using namespace std;

void ispisi(MyStrVect& v) {
	cout << "s=" << v.size() << ", c=" << v.capacity() << ": ";
	for (unsigned i = 0; i < v.size(); i++)
		cout << v.at(i);
	cout << endl;
}
int main() {
	MyStrVect v(5, "-");
	ispisi(v);
	for (int i = 0; i < 32; i++) {
		v.push_back("x");
		ispisi(v);
	}
	return 0;
}