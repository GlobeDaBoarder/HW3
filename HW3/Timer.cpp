#include "Timer.h"

Timer::Timer() 
	: m_start(std::chrono::high_resolution_clock::now()), m_end(m_start), m_time(m_end - m_start)
{
}

void Timer::start()
{
	m_start = std::chrono::high_resolution_clock::now();
}

void Timer::end()
{
	m_end = std::chrono::high_resolution_clock::now();
	m_time = m_end - m_start;
}

double Timer::getTime() const { return m_time.count(); }