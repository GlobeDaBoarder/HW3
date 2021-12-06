#pragma once
#include <chrono>

class Timer
{
private:
	std::chrono::high_resolution_clock::time_point m_start;
	std::chrono::high_resolution_clock::time_point m_end;
	std::chrono::duration<double, std::micro> m_time;

public:

	Timer();

	void start();

	void end();

	double getTime() const;
};