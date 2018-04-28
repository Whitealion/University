#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream in("Numbers.txt");
	if (!in) {
		cout << "File reading error!" << endl;
		return 1;
	}

	for (unsigned i = 1; i <= 5; i++) {

	}

	in.close();

	return 0;
}