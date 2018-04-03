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
	MyDoubleVector v1;
	MyDoubleVector v2(7);
	MyDoubleVector v3(5, 20);

	print(v1);
	cout << endl;
	print(v2);
	v2.push_back(15);
	print(v2);
	cout << endl;
	print(v3);
	v3.insert(2, 10);
	print(v3);

	return 0;
}