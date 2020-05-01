#ifndef MANAGER_H_INCLUDE
#define MANAGER_H_INCLUDED
#include "Employee.h"
class Manager : public Employee {
private:
	double bonus;
	char* branch;
public:
	Manager();
	Manager(const char*, int, double, double, const char*);
	Manager(const Manager&);
	Manager& operator=(const Manager&);
	~Manager();

	void setBonus(double);
	void setBranch(const char*);

	double calcSalary() override;
	//double salary();
		
};
#endif //MANAGER_H_INCLUDED
