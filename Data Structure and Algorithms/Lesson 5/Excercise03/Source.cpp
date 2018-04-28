#include "WaterLevel.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

template<typename T>
T convert(string &s) {
	stringstream c(s);
	T result;
	c >> result;
	return result;
}

void load(ifstream &in, list<WaterLevel> &levels) {
	string line;

	//skip header
	getline(in, line);

	while (getline(in, line)) {
		//cout << line << endl;
		stringstream ss(line);
		string temp;
		//skip 1st column
		getline(ss, temp, ',');

		//year
		getline(ss, temp, ',');
		int year = convert<int>(temp);
		//level
		getline(ss, temp);
		double level = convert<double>(temp);

		levels.emplace_back(year, level);
	}
}

void print(WaterLevel &wl) {
	cout << wl.to_string() << endl;
}

int main() {

	ifstream in("LakeHuron.csv");
	if (!in) {
		cout << "404" << endl;
		return 1;
	}

	list<WaterLevel> levels;
	load(in, levels);
	in.close();

	cout << "Godina: ";
	int year;
	cin >> year;

	for (auto it = levels.begin(); it != levels.end(); ++it) {
		if (it->get_year() <= year) {
			print(*it);
		}
	}

	cout << "Godina, bris: ";
	cin >> year;

	for (auto it = levels.begin(); it != levels.end(); ) {
		if (it->get_year() <= year) {
			it = levels.erase(it);
		}
		else {
			++it;
		}
	}

	for_each(levels.rbegin(), levels.rend(), print);

	return 0;
}