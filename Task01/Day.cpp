#include "Day.h"

Day::Day()
{
	
}

Day::Day(const Day& day)
{
	this->date = day.getDate();
	this->list = day.getList();
}

void Day::addEvent()
{
	Event tempEvent;
	string temp;

	do
	{
		cin.get();
		cout << "enter event name: ";
		getline(cin, temp);

	} while (!tempEvent.setHeader(temp));

	do
	{
		cin.get();
		cout << "enter event info: ";
		getline(cin, temp);

	} while (!tempEvent.setInfo(temp));

	do
	{
		cout << "this event important yes or no";
		cin >> temp;

	} while (temp != "yes" && temp != "no");

	if (temp == "yes")
	{
		tempEvent.setImportant(true);
		this->list.push_front(tempEvent);
	}
	else 
	{
		tempEvent.setImportant(false);
		this->list.push_back(tempEvent);
	}		
}

void Day::removeEvent()
{
	size_t length = this->list.getSize();
	size_t index;

	do
	{
		cout << "enter ivent index [0: " << length - 1 << " ]: ";
		cin >> index;
	} while (index < 0 || index >= length);

	this->list.remove(index);
}

void Day::setDate()
{
	size_t day;
	size_t month;
	size_t year;

	do
	{
		cout << "enter date [1 1 2020] : ";
		cin >> day >> month >> year;
	} while (!this->date.setDay(day) && !this->date.setMonth(month) && !this->date.setYear(year));
}

Date Day::getDate() const
{
	return this->date;
}

List<Event> Day::getList() const
{
	return List<Event>(list);
}

void Day::print()
{
	this->date.print();

	for (size_t i = 0; i < list.getSize(); i++)
		list[i].print();
}
