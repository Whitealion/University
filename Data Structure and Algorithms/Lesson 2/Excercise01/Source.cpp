#include <iostream>
using namespace std;

void multiply() {
	double x, y;

	cout << "Insert first operand: ";
	cin >> x;
	cout << "Insert second operand: ";
	cin >> y;

	cout << x * y << endl;
}

void divide() {
	double x, y;

	cout << "Insert first operand: ";
	cin >> x;
	cout << "Insert second operand: ";
	cin >> y;

	if (y == 0) {
		throw exception("Operation failure: divisor is zero");
	}
	else {
		cout << x / y << endl;
	}
}

void root() {
	double x;

	cout << "Insert operand: ";
	cin >> x;

	if (x < 0) {
		throw exception("Operation failure: divisor is negative");
	}
	else {
		cout << sqrt(x) << endl;
	}
}

int main() {
	char operation;

	cout << "Choose the operation:\n"
		<< "m for multiplication\n"
		<< "d for division\n"
		<< "r for square root\n";
	cin >> operation;

	switch(operation) {
		case 'm':
			multiply();
			break;
		case 'd':
			try
			{
				divide();
			}
			catch (const std::exception& e)
			{
				cout << e.what() << endl;
				return 1;
			}
			break;
		case 'r':
			try
			{
				root();
			}
			catch (const std::exception& e)
			{
				cout << e.what() << endl;
				return 1;
			}
			break;
	}

	return 0;
}