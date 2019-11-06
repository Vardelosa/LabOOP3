#include <iostream>
#include "MenuManager.h"


int main()
{
	std::vector<Punkt> hPunkts = std::vector<Punkt>();
	hPunkts.push_back(Punkt("a"));
	hPunkts.push_back(Punkt("b"));
	hPunkts.push_back(Punkt("c"));
	hPunkts.push_back(Punkt("d"));
	hPunkts[0].Add(Punkt("aabb"));
	Punkt head = Punkt("Menu", hPunkts);

	Menu menu = Menu(head);

	MenuManager menuManager = MenuManager(&menu);

	menuManager(0, 2) = head;

	menuManager->useMenu();

	system("pause");
}