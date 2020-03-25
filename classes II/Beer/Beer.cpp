#include "Beer.h"

Beer::Beer()
{
	brand[0] = '\0';
	volume = 0;
}

Beer::Beer(const char* brand, int volume)
{
	setBrand(brand);
	setVolume(volume);
}

int Beer::getVolume() const
{
	return volume;
}

void Beer::setVolume(int volume)
{
	if (volume >= 0)
		this->volume = volume;
}

const char* Beer::getBrand() const
{
	return brand;
}

void Beer::setBrand(const char* brand)
{
	strcpy_s(this->brand,128, brand);
}

void Beer::addBeer(Beer& other, int amount)
{
	int actualAmount = amount < other.getVolume() ? amount : other.getVolume();

	if (actualAmount > 0) {
		strcat_s(this->brand, "&");
		strcat_s(this->brand, other.brand);
		this->volume += actualAmount;
		other.volume -= actualAmount;
	}
}

bool Beer::hasBrand(const char* otherBrand)
{
	const char* pCurr = this->brand;
	const char* pOther = otherBrand;
	while (*pCurr) {
		while (*pCurr == *pOther) {
			++pCurr;
			++pOther;
			if (*pOther == '\0' && (*pCurr == '\0' || *pCurr == '&'))
				return true;
		}

		while (*pCurr && *pCurr != '&')
			++pCurr;

		if (*pCurr == '&') {
			++pCurr;
			pOther = otherBrand;
		}
	}

	return false;
}
