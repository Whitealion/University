#include <iostream>
#include <fstream>
#include <sstream>
#include <stack>
using namespace std;

void check_parenthesys(ifstream &f) {
	stack<char> s;
	char temp;
	while (f >> temp) {
		if (temp == '(' || temp == '{' || temp == '[') {
			s.push(temp);
		}
		else if (temp == ')') {
			if (s.empty() || s.top() != '(') {
				cout << "has an error in the parenthesys nesting!" << endl;
				return;
			}
			s.pop();
		} 
		else if (temp == ']') {
			if (s.empty() || s.top() != '[') {
				cout << "has an error in the parenthesys nesting!" << endl;
				return;
			}
			s.pop();
		}
		else if (temp == '}') {
			if (s.empty() || s.top() != '{') {
				cout << "has an error in the parenthesys nesting!" << endl;
				return;
			}
			s.pop();
		}
	}

	if (s.empty()) {
		cout << "is nested correctly!" << endl;
	}
	else {
		cout << "has an error in the parenthesys nesting!" << endl;
	}
}

int main() {
	ifstream in1("Par1.txt");
	ifstream in2("Par2.txt");
	ifstream in3("Par3.txt");

	cout << "File number one ";
	check_parenthesys(in1);
	cout << "File number two ";
	check_parenthesys(in2);
	cout << "File number three ";
	check_parenthesys(in3);


	in1.close();
	in2.close();
	in3.close();

	return 0;
}