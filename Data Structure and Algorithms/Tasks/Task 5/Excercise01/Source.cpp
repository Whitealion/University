#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool check_parenthesys(string s) {
	stack<char> par;

	for (unsigned i = 0; i < s.length(); ++i)
	{
		if (s[i] == '(') {
			par.push(s[i]);
		}
		else if (s[i] == ')') {
			if (par.empty()) {
				return false;
			} 
			else {
				par.pop();
			}
		}
	}

	return par.empty();
}

int main() {

	cout << "Insert the mathematical expression to check: " << endl;
	string exp;
	getline(cin, exp);

	if (check_parenthesys(exp)) {
		cout << "The expression is correct!" << endl;
	}
	else {
		cout << "The expression is not nested well!" << endl;
	}

	return 0;
}