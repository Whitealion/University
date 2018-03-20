#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

bool adjOdd(int x, int y) {
	return x % 2 && y % 2;
}

int main() {
	array<int, 10> arr = { 1, 2, 4, 5, 7, 8, 10, 11, 13, 20 };

	if (adjacent_find(arr.begin(), arr.end(), adjOdd) != arr.end()) {}
	cout << "The first pair of adjacent odd numbers is: " << *adjacent_find(arr.begin(), arr.end(), adjOdd) 
		<< ", " << *(adjacent_find(arr.begin(), arr.end(), adjOdd) + 1) << endl;

	return 0;
}