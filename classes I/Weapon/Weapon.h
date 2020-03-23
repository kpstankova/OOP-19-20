#ifndef WEAPON_H_INCLUDED
#define WEAPON_H_INCLUDED
#include<iostream>
#include<cstring>
using std::cout;
using std::endl;
class Weapon {
private:
	char name[20];
	int power;
	int durability;
public:
	Weapon();
	Weapon(const char* name, int power, int durability);
	int use();

	const char* getName() const;
	int getPower() const;
	int getDurability()const;

	void setPower(int power);
	void setDurability(int duraility);
	void setName(const char* name);

};
#endif //WEAPON_H_INCLUDED
