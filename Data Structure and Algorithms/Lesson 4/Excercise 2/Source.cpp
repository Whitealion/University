#include "Point3D.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
	ifstream in("tocke.txt");
	if (!in) {
		cout << "404" << endl;
	}

	int a, b, c;
	string line;
	vector<Point3D> points;

	while (getline(in, line)) {
		stringstream ss(line);
		ss >> a;
		ss >> b;
		ss >> c;
		points.emplace_back(a, b, c);
	}
	in.close();

	for (unsigned i = 0; i < points.size(); ++i) {
		cout << points[i].get_length() << " "
			<< points[i].get_height() << " "
			<< points[i].get_depth() << endl;
	}
	
	return 0;
}