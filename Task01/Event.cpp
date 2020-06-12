#include "Event.h"

Event::Event()
{
	this->header = "none";
	this->info = "none";
	this->important = false;
}

Event::Event(string header, string info, bool important)
{
	setHeader(header);
	setInfo(info);
	setImportant(important);
}

Event::Event(const Event& event)
{
	setHeader(event.getHeader());
	setInfo(event.getInfo());
	setImportant(event.getImportant());
}

bool Event::setHeader(string text)
{
	size_t length = text.length();
	size_t count = 0;

	for (size_t i = 0; i < length; i++)
		if (CHECK_TEXT)
			count++;

	if (count == length)
	{
		this->header = text;
		return true;
	}
	return false;
}

bool Event::setInfo(string text)
{
	size_t length = text.length();
	size_t count = 0;

	for (size_t i = 0; i < length; i++)
		if (CHECK_TEXT)
			count++;

	if (count == length) 
	{
		this->info = text;
		return true;
	}

	return false;
}

bool Event::setImportant(bool important)
{
	this->important = important;
	return true;
}

string Event::getHeader() const
{
	return this->header;
}

string Event::getInfo() const
{
	return this->info;
}

bool Event::getImportant() const
{
	return this->important;
}

void Event::print() const
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	if (getImportant()) 
	{
		SetConsoleTextAttribute(hConsole, WORD(Red));
		cout << "name: " << getHeader() << endl;
	}
	else 
	{
		SetConsoleTextAttribute(hConsole, WORD(Green));
		cout << "name: " << getHeader() << endl;
	}
	
	SetConsoleTextAttribute(hConsole, WORD(White));

	cout << "name: " << getHeader() << endl;
	cout << "info: " << getInfo() << endl;
}

Event::~Event()
{

}

