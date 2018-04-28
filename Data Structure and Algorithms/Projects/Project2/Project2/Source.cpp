#include "GameOfLife.h"
#include <iostream>
using namespace std;


int main() {
	GameOfLife game;
	bool cont = false;

	do {
		game.draw();
		game.nextgen();

		cout << "\n\tNext generation? (1/0) ";
		cin >> cont;
	} while (cont);


	return 0;
}