#include "IPaddress.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int to_int(string s)
{
	stringstream c(s);
	int n;
	c >> n;
	return n;
}

void load(ifstream &in, vector<IPaddress> &address)
{
	string line;
	int a, b, c, d;
	string temp;
	while (getline(in, line)) {
		/*cout << line << endl;*/
		stringstream ss(line);
		getline(ss, temp, '.');
		a = to_int(temp);
		getline(ss, temp, '.');
		b = to_int(temp);
		getline(ss, temp, '.');
		c = to_int(temp);
		getline(ss, temp);
		d = to_int(temp);
		address.emplace_back(a, b, c, d);
	}
}

void print_if_found(vector<IPaddress> &address, char c)
{
	for (auto i = address.begin(); i != address.end(); ++i) {
		if ((*i).which_class() == c) {
			cout << i->to_string() << endl;
		}
	}
}

int main()
{
	ifstream in("ip_adrese.txt");
	if (!in) {
		cout << "404" << endl;
		return 1;
	}

	vector<IPaddress> address;
	load(in, address);
	in.close();

	print_if_found(address, 'C');
	return 0;
}
