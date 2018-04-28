#include <iostream>
#include <array>
#include <ctime>
#include <chrono>
using namespace std;
using namespace std::chrono;

int gen_rand() 
{
	return rand() % 5 + 1;
}

int main() {

	srand(time(nullptr));
	array<int, 10000> nums;

	auto begin = high_resolution_clock::now();

	for (unsigned i = 0; i < nums.size(); i++) {
		nums[i] = gen_rand();
	}

	double res = 0;
	for (unsigned i = 0; i < nums.size(); i++) {
		res += nums[i];
	}

	res /= nums.size();

	auto end = high_resolution_clock::now();

	cout << "Average value: " << res << endl
		<< "Time required (expressed in nanoseconds) for number generation and average calculation: "
		<< duration_cast<nanoseconds>(end - begin).count() << endl;

	return 0;
}