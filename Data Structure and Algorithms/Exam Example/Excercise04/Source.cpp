#include <iostream>
#include <fstream>
#include <queue>
using namespace std;

int main()
{
	ifstream in("Numbers.txt");
	ofstream out("Output.txt");
	if (!in || !out) {
		cout << "File reading error!" << endl;
		return 1;
	}


	queue<int> q;
	for (unsigned i = 0; i < 5; i++) {
		for (int j = i * 5; j < i * 5 + 5; j++) {
			int temp;
			in >> temp;
			q.push(temp);
		}

		while (!q.empty()) {
			out << q.front() << " ";
			q.pop();
		}

		cout << "File successfully copied!" << endl;
	}

	in.close();
	out.close();

	return 0;
}