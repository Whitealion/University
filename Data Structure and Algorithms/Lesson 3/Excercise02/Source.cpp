#include "funkcije_za_sortiranje.h"
#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;

int generate_rnd(int min, int max) {
	return rand() % (max - min + 1) + min;
}

int* prepare_array(int n) {
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = generate_rnd(1, 1000);
	}

	return arr;
}

int* copy_array(int *original, int n) {
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = original[i];
	}

	return arr;
}

int main() {

	srand(time(nullptr));
	
	int n = 10000;
	int *arr = prepare_array(n);
	int *copy = copy_array(arr, n);

	auto begin = chrono::high_resolution_clock::now();
	quick_sort(arr, n);
	auto end = chrono::high_resolution_clock::now();

	cout << "quick: "
		<< chrono::duration_cast<chrono::nanoseconds>(end - begin).count()
		<< endl;
	delete[] arr;

	begin = chrono::high_resolution_clock::now();
	bubble_sort(copy, n);
	end = chrono::high_resolution_clock::now();

	cout << "bubble: "
		<< chrono::duration_cast<chrono::nanoseconds>(end - begin).count()
		<< endl;
	delete[] copy;
	
	return 0;
}