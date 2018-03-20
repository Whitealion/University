#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
	array<int, 10> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	if (all_of(arr.begin(), arr.end(), [](int i) {return i % 2; })) {
		cout << "All of the numbers in the array are odd;" << endl;
	}
	else {
		cout << "The array contains even numbers!" << endl;
	}
	return 0;
}