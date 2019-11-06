#pragma once
#include "Punkt.h"

class Menu
{
	Punkt head;

public:
	Menu();

	Menu(Punkt _head);

	std::string to_string();
};

