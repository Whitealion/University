#include "Rectangle.h"
#include <iostream>
using namespace std;

void start_draw(Rectangle &r) {
	cout << "Insert the symbol for the border of the rectangle: ";
	char border;
	cin >> border;

	cout << "Is the inside of the rectangle empty? y = 1/ n = 0 ";
	bool needed;
	cin >> needed;

	char inside;
	if (needed) {
		inside = ' ';
	}
	else {
		cout << "Insert the symbol to fill the rectangle with: ";
		cin >> inside;
	}

	r.draw(border, inside, !needed);
}

int main() {
	int x, y;

	cout << "Insert rectangle length: ";
	cin >> x;
	cout << "Insert rectangle height: ";
	cin >> y;

	try
	{
		Rectangle r(x, y);
		start_draw(r);
	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
	}

	return 0;
}