#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void read(const string &fname) {
	ifstream in(fname);
	if (!in) {
		throw exception("file not found");
	}

	string line;
	while (getline(in, line)) {
		cout << line << endl;
	}
	in.close();
}

int main() {

	cout << "filename: ";
	string fname;
	getline(cin, fname);

	try
	{
		read(fname);
	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
		return 1;
	}

	return 0;
}