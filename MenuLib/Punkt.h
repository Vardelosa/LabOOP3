#pragma once
#include <string>
#include <vector>

class Punkt
{
	std::string name;
	std::vector<Punkt> punkts;

public:
	Punkt();

	Punkt(std::string _name, std::vector<Punkt> _punkts);

	Punkt& operator[](int index);

	int getCount();

	std::string to_string();
};

