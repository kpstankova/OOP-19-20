#include "Waiter.h"

Waiter::Waiter() : Employee()
{}

Waiter::Waiter(const char* name, int age, double salary) : Employee(name,age,salary)
{
}

/*double Waiter::salary()
{
	return this->salary;
}
*/
double Waiter::calcSalary()
{
	return this->salary;
}
