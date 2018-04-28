#include <iostream>
#include <fstream>
#include <list>
#include <vector>
#include <stack>
using namespace std;

int main() {
	
	ifstream in("Numbers.txt");
	if (!in) {
		cout << "File reading error!" << endl;
		return 1;
	}

	list<int> l;
	for (unsigned i = 0; i < 25; i++) {
		int temp;
		in >> temp;
		l.push_back(temp);
	}

	for (auto it = l.begin(); it != l.end(); ) {
		if (*it < 0) {
			it = l.erase(it);
		}
		else {
			++it;
		}
	}

	for (auto it = l.begin(); it != l.end(); ++it) {
		*it *= 3;
	}

	vector<int> v;
	for (auto it = l.rbegin(); it != l.rend(); ++it) {
		v.push_back(*it);
	}

	for (unsigned i = 0; i < v.size(); i++) {
		v.at(i) *= 3;
	}

	stack<int> s;
	for (unsigned i = 0; i < v.size(); i++) {
		s.push(v.at(i));
	}

	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}

	return 0;
}