#include <iostream>
#include <string>
#include <chrono>
#include <list>
#include <forward_list>
#include <ctime>
#include <sstream>
using namespace std;
using namespace std::chrono;

int gen_rnd(int max, int min) {
	return rand() % (max - min + 1) + min;
}

string gen_rnd_str(int n) {
	stringstream ss;
	for (int i = 0; i < n; i++) {
		ss << (char)gen_rnd(97, 122);
	}

	return ss.str();
}

void measure(int n) {
	auto begin = high_resolution_clock::now();

	forward_list<string> list;
	for (int i = 0; i < n; i++) {
		list.push_front(gen_rnd_str(30));
	}

	auto end = high_resolution_clock::now();
	cout << duration_cast<microseconds>(end - begin).count() << endl;
}

int main() {
	srand(time(nullptr));

	//gen_rnd_str(30);
	measure(100000);

	return 0;
}