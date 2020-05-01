#include "Manager.h"

Manager::Manager(): Employee()
{
	setBonus(0.0);
	setBranch("default");
}

Manager::Manager(const char* name, int age, double salary, double bonus, const char* branch) : Employee(name,age,salary)
{
	setBonus(bonus);
	setBranch(branch);
}

Manager::Manager(const Manager& other) : Employee(other)
{
	setBonus(other.bonus);
	setBranch(other.branch);
}

Manager& Manager::operator=(const Manager& other)
{
	if (this!=&other)
	{
		Employee::operator=(other);
		setBonus(other.bonus);
		setBranch(other.branch);

	}
	return *this;
}

Manager::~Manager()
{
	delete[] this->branch;
}

void Manager::setBonus(double bonus)
{
	this->bonus = bonus;
}

void Manager::setBranch(const char* branch)
{
	delete[] this->branch;
	this->branch = new char[strlen(branch) + 1];
	strcpy_s(this->branch, strlen(branch) + 1, branch);
}

/*double Manager::salary()
{
	return this->salary + bonus;
}*/

double Manager::calcSalary()
{
	double result;
	result = salary + bonus;
	return result;
}
