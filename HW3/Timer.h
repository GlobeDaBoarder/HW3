#pragma once
#include <chrono>

class Timer
{
private:
	std::chrono::steady_clock::time_point m_start;
	std::chrono::steady_clock::time_point m_end;
	std::chrono::duration<double, std::milli> m_time;

public:

	Timer();

	void start();

	void end();

	double getTime() const;
};