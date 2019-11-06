#pragma once
#include <string>
#include <vector>

class Punkt
{
	std::string name;
	std::vector<Punkt> punkts;

public:
	Punkt();

	Punkt(std::string _name, std::vector<Punkt> _punkts = std::vector<Punkt>());

	Punkt& operator[](int index);

	int getCount();

	void Add(Punkt p1);

	void SetName(std::string _name);

	std::string to_string();
};

