#include "Point.h"
#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
using namespace std::chrono;

Point* prepare_array(int n) {
	Point *arr = new Point[n];
	for (int i = 0; i < n; i++) {
		arr[i].init(i, i);
	}
	return arr;
}

int main() {

	ofstream out("distances.txt");
	if (!out) {
		cout << "404" << endl;
		return 1;
	}

	int n = 5;
	Point *arr = prepare_array(n);

	auto begin = chrono::high_resolution_clock::now();

	for (int i = 0; i < n; i++) {
		out << "d(" << arr[i].get_x() << ", " << arr[i].get_y() << ") = "
			<< arr[i].distance() << endl;
	}

	auto end = chrono::high_resolution_clock::now();

	out.close();
	delete[] arr;

	cout << "Trajanje: "
		<< chrono::duration_cast<chrono::microseconds>(end - begin).count()
		<< endl;
	return 0;
}