#pragma once
#include <string>

class Razlomak
{
public:
	Razlomak();
	Razlomak(int x, int y);
	std::string to_string();
	std::string mnozenje(int s);
private:
	int brojnik;
	int nazivnik;
};

