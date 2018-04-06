#include <iostream>
#include <vector>
#include <ctime>
#include <chrono>
using namespace std;
using namespace std::chrono;

int gen_rnd(int min, int max) {
	return rand() % (max - min + 1) + min;
}

int main()
{

	srand(time(nullptr));

	vector<int> v;
	int counter = 0;
	int last_cap = v.capacity();
	auto begin = high_resolution_clock::now();

	//excercise 4
	for (unsigned i = 0; i < 100000; i++)
	{
		v.insert(v.begin(), i);

		if (last_cap != v.capacity())
		{
			counter++;
			last_cap = v.capacity();
		}
	}
	auto end = high_resolution_clock::now();

	cout << duration_cast<milliseconds>(end - begin).count() << endl;



	// excercise 1
	/*v.reserve(100);

	for (unsigned i = 0; i < v.capacity(); i++)
	{
		v.insert(v.begin(), gen_rnd(1, 100));
	}

	for (unsigned i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << " ";
	}
	cout << endl;

	v.resize(50);

	for (auto i = v.begin(); i != v.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;

	v.reserve(30);

	for (auto i = v.rbegin(); i < v.rend(); ++i) 
	{
		cout << *i << " ";
	}
	cout << endl;

	vector<int> v2(v);

	v.clear();

	v2.erase(v2.begin(), v2.begin() + 10);

	cout << v2.front() << ", " << v2.back() << endl;

	for (auto i = v2.begin(); i != v2.end(); )
	{
		i = v2.erase(i);
	}
	cout << v2.size() << endl;
	cout << v2.capacity() << endl;*/

	return 0;
}