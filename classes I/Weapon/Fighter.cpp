#include "Fighter.h"

Fighter::Fighter(const char* name, int strength, int health, Weapon weapon)
{
	setName(name);
	setStrength(strength);
	setHealth(health);
	this->weapon = weapon;
	cout<< "Fighter " << name << " created with strength " << strength << ", health " << health <<
		" and weapon " << weapon.getName() << endl;
}

const char* Fighter::getName() const
{
	return this->name;
}

int Fighter::getStreangth() const
{
	return this->strength;
}

int Fighter::getHealth() const
{
	return this->health;
}

void Fighter::setName(const char* name){
	strcpy_s(this->name, 20, name);
}

void Fighter::setStrength(int strength){
	this->strength = strength;
}

void Fighter::setHealth(int health){
	this->health = health;
}

void Fighter::setWeapon(Weapon weapon){
	this->weapon = weapon;
}

void Fighter::attack(Fighter& enemy){
	int weaponAttack = weapon.use();
	int totalAttack = weaponAttack + strength;
	enemy.health -= totalAttack;
	cout << "Fighter " << name << " attacked " << enemy.name << " with attack " <<totalAttack << endl;
	cout << enemy.name << " left with " << enemy.health << " health" <<endl;
}

bool Fighter::isDead()
{
	return health <= 0;
}
