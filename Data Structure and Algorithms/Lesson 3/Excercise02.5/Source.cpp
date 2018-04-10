#include "Stopwatch.h"
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
	Stopwatch st;

	int n = 10000;
	int *arr = prepare_array(n);
	int *copy = copy_array(arr, n);

	st.set_start();
	quick_sort(arr, n);
	st.set_end();


	cout << "quick: "
		<< st.duration()
		<< endl;
	delete[] arr;

	st.set_start();
	bubble_sort(copy, n);
	st.set_end();

	cout << "bubble: "
		<< st.duration()
		<< endl;
	delete[] copy;

	return 0;
}