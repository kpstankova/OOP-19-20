#ifndef BEER_H_INCLUDED
#define BEER_H_INCLUDED
#include<iostream>
#include<cstring>
class Beer {
private:
	char brand[128];
	int volume;
public:
	Beer();
	Beer(const char* brand, int volume);

	int getVolume()const;
	void setVolume(int volume);

	const char* getBrand()const;
	void setBrand(const char* brand);

	void addBeer(Beer& other, int amount);
	bool hasBrand(const char* otherBrand);

};
#endif //BEER_H_INCLUDED
