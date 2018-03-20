#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
	array<int, 10> arr = { 1, 3, 5, 8, 12, 26, 99, 123, 15, 91 };

	cout << "The first even number is: " << *find_if(arr.begin(), arr.end(), [](int i) {return !(i % 2); }) << endl;

	return 0;
}