#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

void write_bin(string text, ofstream &out) {
	short length = text.length();
	out.write((char*)&length, sizeof(length));
	out.write(text.c_str(), length);
}

int main() {
	
	ifstream in("Broj_znanstvenika_na_milijun_stanovnika.csv");
	ofstream out("Countries.bin", ios_base::binary);
	if (!in || !out) {
		cout << "404" << endl;
		return 1;
	}

	string line;
	getline(in, line);
	while(getline(in, line)) {
		stringstream ss(line);
		string name;
		getline(ss, name, ';');

		string temp;
		bool has_numbers = false;
		for (int i = 0; i < 10; i++) {
			getline(ss, temp, ';');
			stringstream c;
			c << temp;
			int broj;
			if (c >> broj) {
				has_numbers = true;
				break;
			}
		}
		
		if (!has_numbers) {
			cout << name << endl;
			write_bin(name, out);
		}
	}

	in.close();
	out.close();
	return 0;
}