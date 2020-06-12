#include "Planner.h"

Planner::Planner()
{

}

void Planner::addDay()
{
	Day temp;

	temp.setDate();

	this->list.push_back(temp);
}

void Planner::removeDay()
{
	int index = findDay();

	if (index == -1)
		return;

	this->list.remove(index);
}

void Planner::addEventToDay()
{
	int index = findDay();

	if (index == -1)
		return;

	list[index].addEvent();
}

void Planner::removeEventToDay()
{
	int index = findDay();
	
	if (index == -1)
		return;

	list[index].removeEvent();
}

void Planner::print()
{
	for (size_t i = 0; i < this->list.getSize(); i++)
		this->list[0].print();
}

void Planner::Menu()
{
	char choose;
	bool menuWork = true;
	Planner planner;

	do
	{
		ShowMenu();
		cin >> choose;

		switch (choose)
		{
		case '1':
			planner.print();
			break;
		case '2':
			planner.addDay();
			break;
		case '3':
			planner.removeDay();
			break;
		case '4':
			planner.addEventToDay();
			break;
		case '5':
			planner.removeEventToDay();
			break;
		case '0':
			menuWork = false;
			break;
		}
	} while (menuWork);
}

Planner::~Planner()
{
}

int Planner::findDay()
{
	size_t length = this->list.getSize();
	int index;

	do
	{
		cout << "enter day index or -1 to exit [ 0: " << length - 1 << " ]: ";
		cin >> index;

		if (index == -1)
			return -1;
	} while (index < 0 || index >= length);

	return index;
}

void Planner::ShowMenu()
{
	cout << "1. show plann\n";
	cout << "2. add day\n";
	cout << "3. remove day\n";
	cout << "4. add event to day\n";
	cout << "5. remove event\n";
	cout << "0. exit\n";

	cout << "enter yout choose: ";
}
