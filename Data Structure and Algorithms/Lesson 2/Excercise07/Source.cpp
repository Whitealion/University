#include <iostream>
#include <string>
#include <array>
#include <fstream>
#include <vector>
using namespace std;

void fill(ifstream &in, vector<string> &words) {
	string line;
	while (in >> line) {
		words.push_back(line);
	}
}

int main() {

	ifstream in("NekiTekst.txt");
	if (!in) {
		cout << "404" << endl;
		return 1;
	}

	vector<string> words;
	fill(in, words);
	in.close();

	cout << count(words.begin(), words.end(), "the") << endl;

	return 0;
}