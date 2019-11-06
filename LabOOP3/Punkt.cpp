#include "Punkt.h"

Punkt::Punkt() :
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

void Punkt::Add(Punkt p1)
{
	punkts.push_back(p1);
}

void Punkt::SetName(std::string _name)
{
	name = _name;
}

std::string Punkt::to_string()
{
	return name;
}
