#ifndef WAITER_H_INCLUDE
#define WAITER_H_INCLUDED
#include "Employee.h"
class Waiter : public Employee {
public:
	Waiter();
	Waiter(const char*, int, double);

	double calcSalary() override;

	//double salary();
};
#endif //WAITER_H_INCLUDED
