#include "Employee.h"

Employee::Employee()
{
	setName("default");
	setAge(0);
	setSalary(0.0);
}

Employee::Employee(const char* name, int age, double salary)
{
	setAge(age);
	setName(name);
	setSalary(salary);
}

Employee::Employee(const Employee& other)
{
	setAge(other.age);
	setName(other.name);
	setSalary(other.salary);
}

Employee& Employee::operator=(const Employee& other)
{
	if (this!=&other)
	{
		setAge(other.age);
		setName(other.name);
		setSalary(other.salary);
	}
	return *this;
}

Employee::~Employee()
{
	delete[] name;
}

const char* Employee::getName() const
{
	return this->name;
}

int Employee::getAge() const
{
	return this->age
}

double Employee::getSalary() const
{
	return this->salary;
}

void Employee::setName(const char* name)
{
	delete[] this->name;
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}

void Employee::setAge(int age)
{
	this->age = age;
}

void Employee::setSalary(double salary)
{
	this->salary = salary;
}

/*double Employee::salary()
{
	return this->salary;
}
*/