#include "Students.h"
#include <iostream>
#include <string>
using namespace std;

int gen_rand_year() {
	srand(time(nullptr));
	return rand() % 37 + 1961;
}

int main()
{
	Students arr[3];

	string temp;
	for (unsigned i = 0; i < 3; ++i) {
		cout << "Insert the name of the student number " << i + 1 << ": " << endl;
		getline(cin, temp);
		arr[i].set_name(temp);
		cout << "Insert the surname of the student number " << i + 1 << ": " << endl;
		getline(cin, temp);
		arr[i].set_surn(temp);
		arr[i].set_year(gen_rand_year());
	}

	for (unsigned i = 0; i < 3; ++i) {
		cout << arr[i].get_name() << " " << arr[i].get_surname()
			<< "(" << arr[i].get_year() << ")" << endl;
	}

	return 0;
}