#include "MyDoubleVector.h"
#include <iostream>
using namespace std;

void print(MyDoubleVector &v)
{
	cout << "Vector data: " << endl;
	for (unsigned i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << "\t";
	}
	cout << endl;
	cout << "Size: " << v.size() << endl;
	cout << "Capacity: " << v.capacity() << endl;
}


int main() {
	MyDoubleVector v(5, 20);

	print(v);
	v.insert(2, 10);
	print(v);

	return 0;
}