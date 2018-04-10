#pragma once
#include <iostream>
#include <chrono>

class Stopwatch
{
public:
	Stopwatch();
	void set_start();
	void set_end();
	unsigned long long duration();
private:
	std::chrono::time_point<std::chrono::high_resolution_clock> start_time;
	std::chrono::time_point<std::chrono::high_resolution_clock> end_time;
};

