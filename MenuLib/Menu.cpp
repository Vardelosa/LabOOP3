#include "pch.h"
#include "Menu.h"

Menu::Menu():
	Menu(Punkt())
{
}

Menu::Menu(Punkt _head)
{
	head = _head;
}

std::string Menu::to_string()
{
	std::string info = head.to_string() + "\n\n";

	for (int index = 0; index < head.getCount(); ++index)
		info += std::to_string(index + 1) + ". " + head[index].to_string() + "\n";

	return info;
}
