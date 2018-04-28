#include <iostream>
#include <list>
#include <forward_list>
#include <algorithm>
using namespace std;

void print(int &n) {
	cout << n << " ";
}

int main() {

	list<int> nums(10);

	for (auto it = nums.begin(); it != nums.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;

	int n = 10;
	for (auto it = nums.rbegin(); it != nums.rend(); ++it)
	{
		*it = n--;
	}

	cout << "first: " << nums.front() << endl;
	cout << "last: " << nums.back() << endl;

	for (auto it = nums.begin(); it != nums.end(); advance(it, 2))
	{
		cout << *it << " ";
	}
	cout << endl;

	forward_list<int> even;
	for (auto it = nums.begin(); it != nums.end(); ++it)
	{
		advance(it, 1);
		even.push_front(*it);
	}

	even.pop_front();
	cout << "first even: " << even.front() << endl;

	for_each(even.begin(), even.end(), print);
	cout << endl;

	while (!even.empty()) {
		even.pop_front();
	}

	//nums.clear();
	nums.erase(nums.begin(), nums.end());
	cout << nums.size() << endl;


	return 0;
}