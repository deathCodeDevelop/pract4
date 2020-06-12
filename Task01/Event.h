#pragma once
#include <iostream>
#include <windows.h>
using std::string;
using std::cout;
using std::endl;

#define CHECK_TEXT ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z') || (text[i] >= '0' && text[i] <= '9') || text[i] == ':')

enum ConsoleColor {
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};

class Event
{
public:
	Event();
	Event(string header, string info, bool important);
	Event(const Event& event);

	//setters
	bool setHeader(string text);
	bool setInfo(string text);
	bool setImportant(bool important);

	//getters
	string getHeader() const;
	string getInfo() const;
	bool getImportant() const;

	//print
	void print() const;

	~Event();
private:
	string header;
	string info;
	bool important;
};
