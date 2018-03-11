#include "Brzina.h"



Brzina::Brzina()
{
	state = 0;
}

void Brzina::uVecu()
{
	if (state < 5) {
		state++;
	}
}

void Brzina::uManju()
{
	if (state > 0) {
		state--;
	}
}

std::string Brzina::to_string()
{
	switch (state) {
	case 0:
		return "*zzz*";
	case 1:
		return "R";
	case 2:
		return "Rr";
	case 3:
		return "Rrr";
	case 4:
		return "Brrrm";
	case 5:
		return "Brrrrrrrrrrrrrrrrrm!";
	}

}
