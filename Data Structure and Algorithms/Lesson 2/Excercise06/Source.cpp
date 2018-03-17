#include <iostream>
#include <string>
#include <array>
#include <fstream>
using namespace std;

int count_words(ifstream &in) {
	int counter = 0;
	string line;
	while (in >> line) {
		counter++;
	}
	return counter;
}

void fill(ifstream &in, array<string, 250> &words) {
	int counter = 0;
	string line;
	while (in >> line) {
		words[counter++] = line;
	}
}

int main() {

	ifstream in("NekiTekst.txt");
	if (!in) {
		cout << "404" << endl;
		return 1;
	}

	//int n = count_words(in);
	//cout << n << endl;
	array<string, 250> words;
	fill(in, words);
	in.close();

	cout << count(words.begin(), words.end(), "the") << endl;

	return 0;
}