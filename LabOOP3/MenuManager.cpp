#include "MenuManager.h"

MenuManager::MenuManager():
	MenuManager(new Menu())
{
}

MenuManager::MenuManager(Menu* _menu)
{
	menu = _menu;
	i = -1;
	j = -1;
}

MenuManager& MenuManager::operator()(int ii, int jj)
{
	i = ii;
	j = jj;

	return *this;
}

Menu* MenuManager::operator->()
{
	return menu;
}

MenuManager& MenuManager::operator=(Punkt s)
{
	if (i < 0 || j < 0 || i >= menu->GetCount() || j >= menu->GetCount())
		return *this;

	for (int index = i; index < j; ++index)
		(*menu)[index].SetName(s[0][0].to_string());

	return *this;
}
