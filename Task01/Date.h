#pragma once
#include <iostream>
using std::cout;
using std::endl;

class Date
{
public:
	enum DataLimits
	{
		MIN_DAY = 1,
		MAX_DAY = 31,
		MIN_MONTH = 1,
		MAX_MONTH = 12,
		MIN_YEAR = 2020,
		MAX_YEAR = 2077
	};

	Date();

	//setters
	bool setDay(size_t day);
	bool setMonth(size_t month);
	bool setYear(size_t year);

	//getters
	size_t getDay() const;
	size_t getMonth() const;
	size_t getYear() const;

	//print
	void print() const;

	~Date();

private:
	size_t day;
	size_t month;
	size_t year;

};

