#include "GameOfLife.h"
#include <iostream>
#include <ctime>


GameOfLife::GameOfLife()
{
	srand(time(nullptr));

	for (unsigned i = 0; i < board.size(); ++i) {
		board[i] = (rand() % 6 == 0);
	}
}

void GameOfLife::nextgen()
{
	std::array<int, 800> next;
	for (unsigned i = 0; i < board.size(); i++) {
		int neighbors = check_neighbors(i);
		next[i] = (neighbors == 3) || (board[i] && neighbors > 1 && neighbors < 4);
	}

	board = next;
}

void GameOfLife::draw()
{
	system("cls");
	for (unsigned i = 0; i < board.size(); ++i) {
		if ((i != 0) && (i % 40 == 0)) {
			std::cout << std::endl;
		}
		if (board[i]) {
			std::cout << '*';
		}
		else {
			std::cout << " ";
		}
	}
	std::cout << std::endl;
}

int GameOfLife::check_neighbors(int n)
{
	return (n > 40 && ((n % 40) > 0) && board[n - 41]) + (n > 39 && board[n - 40]) + (n > 39 && (((n + 1) % 40) > 0) && board[n - 39])
		+ (((n % 40) > 0) && board[n - 1]) + ((((n + 1) % 40) > 0 || n == 0) && board[n + 1])
		+ (n < 760 && ((n % 40) > 0) && board[n + 39]) + (n < 760 && board[n + 40]) + (n < 759 && (((n + 1) % 40) > 0 || n == 0) && board[n + 41]);
}