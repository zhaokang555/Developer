#include <iostream>
#include "Time.h"

using namespace std;

istream & operator >>(istream & input, Time & time)
{
	cin >> time.m_Hour >> time.m_Minute >> time.m_Second;
	return input;
}

ostream & operator <<(ostream & output, Time & time)
{
	cout << time.m_Hour << time.m_Minute << time.m_Second;
	return output;
}

int main(void)
{
	Time time(0, 0, 0);
	cin >> time;
	cout << time;
	getchar();
	getchar();
	return 0;
}