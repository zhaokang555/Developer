#ifndef TIME_H
#define TIME_H

#include <iostream>



class Time
{
	friend std::istream & operator >>(std::istream & input, Time & time);
	friend std::ostream & operator <<(std::ostream & output, Time & time);
public:
	// ¹¹Ôìº¯Êý
	Time(int hour, int minute, int second);

	void setHour(int hour);
	void setMinute(int minute);
	void setSecond(int second);
	int getHour();
	int getMinute();
	int getSecond();
private:
	int m_Hour;
	int m_Minute;
	int m_Second;
};


#endif