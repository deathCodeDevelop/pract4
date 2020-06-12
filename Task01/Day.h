#pragma once
#include "Event.h"
#include "Date.h"
#include "List.h"
#include <string>

class Day
{
public:
	Day();
	Day(const Day& day);

	//add event
	void addEvent();
	void removeEvent();

	//set date
	void setDate();

	//getters
	Date getDate() const;
	List<Event> getList() const;

	//print
	void print();

private:
	Date date;
	List<Event> list;
};

