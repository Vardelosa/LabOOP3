#include "Menu.h"

std::string Menu::displayPunkt(Punkt punkt)
{
	std::string info = punkt.to_string() + "\n\n";

	if (punkt.getCount() == 0)
		info += "Empty\n";

	for (int index = 0; index < punkt.getCount(); ++index)
		info += std::to_string(index + 1) + ". " + punkt[index].to_string() + "\n";

	return info;
}

Menu::Menu() :
	Menu(Punkt())
{
}

Menu::Menu(Punkt _head)
{
	head = _head;
}

int Menu::GetCount()
{
	return head.getCount();
}

Punkt& Menu::operator[](int index)
{
	return head[index];
}

void Menu::useMenu()
{
	stepMenu(head);
}

void Menu::stepMenu(Punkt punkt)
{
	system("cls");

	std::cout << displayPunkt(punkt);

	int choosedIndex = -1;

	std::cin >> choosedIndex;

	--choosedIndex;

	if (choosedIndex < 0 || choosedIndex >= punkt.getCount())
		stepMenu(punkt);

	stepMenu(punkt[choosedIndex]);
}

std::string Menu::to_string()
{
	return displayPunkt(head);
}
