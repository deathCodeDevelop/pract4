#include "Date.h"

Date::Date()
{
	this->day = 1;
	this->month = 1;
	this->year = 2020;
}

bool Date::setDay(size_t day) 
{
	if (day >= MIN_DAY && day <= MAX_DAY) 
	{
		this->day = day;
		return true;
	}
		
	return false;
}

bool Date::setMonth(size_t month) 
{
	if (month >= MIN_MONTH && month <= MAX_MONTH) 
	{
		this->month = month;
		return true;
	}
	
	return false;
}

bool Date::setYear(size_t year)
{
	if (year >= MIN_YEAR && year <= MAX_YEAR) 
	{
		this->year = year;
		return true;
	}

	return false;
}

size_t Date::getDay() const
{
	return this->day;
}

size_t Date::getMonth() const
{
	return this->month;
}

size_t Date::getYear() const
{
	return this->year;
}

void Date::print() const
{
	if (getDay() < 10)
		cout << "0";

	cout << getDay() << ".";

	if (getMonth() < 10)
		cout << "0";

	cout << getMonth() << "." << getYear() << endl;
}

Date::~Date()
{

}
