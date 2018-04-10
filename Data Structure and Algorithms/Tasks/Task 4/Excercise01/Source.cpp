#include "MyIntList.h"
#include <iostream>
using namespace std;

int main() {
	MyIntList list;

	for (unsigned int i = 1; i < 16; ++i) {
		list.push_back(i);
	}

	Node *current = list.begin();
	while (current != nullptr) {
		cout << current->num << "\t";
		current = current->next;
	}

	cout << endl;
	return 0;
}