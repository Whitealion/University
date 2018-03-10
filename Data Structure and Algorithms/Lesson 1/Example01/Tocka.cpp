#include <string>
#include <sstream>
using namespace std;

class Tocka
{
public:
	Tocka() {
		set_x(0);
		set_y(0);
	}
	Tocka(int x, int y) {
		set_x(x);
		set_y(y);
	}
	int get_x() {
		return x;
	}

	int get_y() {
		return y;
	}

	void set_x(int x) {
		if (x < 0) {
			x = 0;
		}
		this->x = x;
	}

	void set_y(int y) {
		if (y < 0) {
			y = 0;
		}
		this->y = y;
	}

	string to_string() {
		stringstream ss;
		ss << "T(" << get_x() << ", " << get_y() << ")";
		return ss.str();
	}

	double distance() {
		return sqrt(pow(x, 2) + pow(y, 2));

	}

private:
	int x;
	int y;
};