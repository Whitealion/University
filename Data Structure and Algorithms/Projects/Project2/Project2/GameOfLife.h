#pragma once
#include <array>

class GameOfLife
{
public:
	GameOfLife();
	void nextgen();
	void draw();
private:
	std::array<int, 800> board;
	int check_neighbors(int n);
};

