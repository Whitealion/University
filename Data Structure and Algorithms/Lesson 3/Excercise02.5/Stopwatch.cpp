#include "Stopwatch.h"

Stopwatch::Stopwatch()
{
}

void Stopwatch::set_start()
{
	start_time = std::chrono::high_resolution_clock::now();
}

void Stopwatch::set_end()
{
	end_time = std::chrono::high_resolution_clock::now();
}

unsigned long long Stopwatch::duration()
{
	return std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count();
}
