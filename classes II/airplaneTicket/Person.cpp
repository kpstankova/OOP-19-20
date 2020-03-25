#include "Person.h"
const char* Person::getFirstName() const
{
	return firstName;
}

const char* Person::getSurname() const
{
	return surname;
}

const char* Person::getFamilyName() const
{
	return familyName;
}

int Person::getEgn() const
{
	return egn;
}

int Person::getAge() const
{
	return age;
}

void Person::setFirstName(const char* firstName)
{
	strcpy_s(this->firstName,20, firstName);
}

void Person::setSurname(const char* surname)
{
	strcpy_s(this->surname,20, surname);
}

void Person::setFamilyName(const char* familyName)
{
	strcpy_s(this->familyName,20, familyName);
}

void Person::setEgn(int egn)
{
	this->egn = egn;
}

void Person::setAge(int age)
{
	this->age = age;
}