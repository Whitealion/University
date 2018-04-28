#include "WaterLevel.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
 
double convert(string s) {
	stringstream ss(s);
	double level;
	ss >> level;
	return level;
}

void load(ifstream &in, vector<WaterLevel> &wl) {
	string line;
	string temp;

	getline(in, line);
	while (getline(in, line)) {
		stringstream ss(line);
		getline(ss, temp, ',');
		getline(ss, temp, ',');
		string year = temp;
		getline(ss, temp);
		double level = convert(temp);

		wl.emplace_back(year, level);
	}
}

int main() 
{

	ifstream in("LakeHuron.csv");
	if (!in) 
	{
		cout << "File reading error!" << endl;
		return 1;
	}

	vector<WaterLevel> wl;

	load(in, wl);
	in.close();

	WaterLevel max(wl[0]);
	for (unsigned i = 0; i < wl.size(); i++) {
		if (wl[i].get_level() > max.get_level()) {
			max = wl[i];
		}
	}

	cout << "The lake Huron got its maximum water level of " << max.get_level() << " in the year " << max.get_year() << endl;

	return 0;
}