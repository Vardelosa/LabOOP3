#include "pch.h"
#include "Punkt.h"

Punkt::Punkt():
	Punkt("empty punkt", std::vector<Punkt>())
{
}

Punkt::Punkt(std::string _name, std::vector<Punkt> _punkts)
{
	name = _name;
	punkts = _punkts;
}

Punkt& Punkt::operator[](int index)
{
	return punkts[index];
}

int Punkt::getCount()
{
	return punkts.size();
}

std::string Punkt::to_string()
{
	return name;
}
