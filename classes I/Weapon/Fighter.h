#ifndef FIGHTER_H_INCLUDED
#define FIGHTER_H_INCLUDED
#include"Weapon.h"
class Fighter {
private:
	char name[20];
	int strength;
	int health;
	Weapon weapon;
public:
	Fighter(const char* name, int strength, int health, Weapon weapon);

	const char* getName()const;
	int getStreangth() const;
	int getHealth()const;

	void setName(const char* name);
	void setStrength(int strength);
	void setHealth(int health);
	void setWeapon(Weapon weapon);

	void attack(Fighter& enemy);
	bool isDead();
};
#endif //FIGHTER_H_INCLUDED

