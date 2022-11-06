#pragma once
#include<string>
#include <iostream>

class Triada
{
	int hour;
	int min;
	int sec;
protected:
	std::string year;
public:
	Triada();
	Triada(std::string y, int h, int m, int s);
	virtual void Display();
};
