#include <iostream>
#include "Date.h"
using namespace std;

Date::Date(int day, int month, int year)
{
	setDay(day);
	setMonth(month);
	setYear(year);
}

void Date::setDay(int d)
{
	day = d;
}

int Date::getDay()
{
	return day;
}

void Date::setMonth(int m)
{
	if(m > 12 || m < 1)
		month = 1;
	else
		month = m;
}

int Date::getMonth()
{
	return month;
}

void Date::setYear(int y)
{
	year = y;
}

int Date::getYear()
{
	return year;
}

void Date::displayDate()
{
	cout << month << "/" << day << "/"
		<< year << endl;
}
