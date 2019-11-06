#pragma once
#include "Punkt.h"
#include <iostream>

class Menu
{
	Punkt head;

private:
	std::string displayPunkt(Punkt punkt);

public:
	Menu();

	Menu(Punkt _head);

	int GetCount();

	Punkt& operator[](int index);

	void useMenu();

	void stepMenu(Punkt punkt);

	std::string to_string();
};

