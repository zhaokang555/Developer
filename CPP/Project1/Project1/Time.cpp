#include "Time.h"

// ¹¹Ôìº¯Êý
Time::Time(int hour, int minute, int second)
{
	m_Hour = hour;
	m_Minute = minute;
	m_Second = second;
}

void Time::setHour(int hour)
{
	m_Hour = hour;
}

void Time::setMinute(int minute)
{
	m_Minute = minute;
}

void Time::setSecond(int second)
{
	m_Second = second;
}

int Time::getHour()
{
	return m_Hour;
}

int Time::getMinute()
{
	return m_Minute;
}

int Time::getSecond()
{
	return m_Second;
}

