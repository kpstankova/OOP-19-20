#include "Weapon.h"

Weapon::Weapon(){
	setName("Default");
	setPower(0);
	setDurability(0);
}

Weapon::Weapon(const char* name, int power, int durability){
	setName(name);
	setPower(power);
	setDurability(durability);
}

int Weapon::use(){
	if (durability <= 0){
		return 0;
	}
	durability--;
	return power;
}

const char* Weapon::getName() const{
	return this->name;
}

int Weapon::getPower() const
{
	return this->power;
}

int Weapon::getDurability() const
{
	return this->durability;
}

void Weapon::setPower(int power){
	this->power = power;
}

void Weapon::setDurability(int duraility){
	this->durability = durability;
}

void Weapon::setName(const char* name){
	strcpy_s(this->name, 20, name);
}
