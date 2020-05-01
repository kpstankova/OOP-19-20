#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include<cstring>
#include<iostream>
using namespace std;
class Employee {
protected:
	char* name;
	int age;
	double salary;
public:
	Employee();
	Employee(const char*, int, double);
	Employee(const Employee&);
	Employee& operator=(const Employee&);
	~Employee();

	/*const char* getName()const;
	int getAge()const;
	double getSalary()const;*/

	void setName(const char*);
	void setAge(int);
	void setSalary(double);

	virtual double calcSalary() = 0;
	//virtual double salary();

};
#endif //EMPLOYEE_H_INCLUDED
