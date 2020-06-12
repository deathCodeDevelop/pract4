#pragma once
#include "Day.h"

class Planner
{
public:
	Planner();
	
	//add day
	void addDay();
	//remove day
	void removeDay();

	//add event to day
	void addEventToDay();
	//remove event in day
	void removeEventToDay();

	//const
	void print();

	static void Menu();

	~Planner();
private:
	List<Day> list;
	
	int findDay();
	static void ShowMenu();
};

