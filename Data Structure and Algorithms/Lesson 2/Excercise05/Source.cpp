#include <iostream>
#include <array>
using namespace std;

void fill(array<int, 100> &arr) {
	for (int i = 0; i < arr.size(); i++) {
		arr[i] = i + 1;
	}
}

bool prime(const int n) {
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return n != 1;
}

void print(const int n) {
	if (prime(n)) {
		cout << n << endl;
	}
}

int main() {

	array<int, 100> arr;
	fill(arr);
	//reverse(arr.begin(), arr.end());
	for_each(arr.rbegin(), arr.rend(), print);

	return 0;
}