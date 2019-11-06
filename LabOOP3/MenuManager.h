#pragma once
#include "Menu.h"
#include "Punkt.h"

class MenuManager
{
	Menu* menu;
	int i;
	int j;

public:
	MenuManager();

	MenuManager(Menu* _menu);

	MenuManager& operator()(int ii, int jj);
	Menu* operator->();
	MenuManager& operator=(Punkt s);
};

