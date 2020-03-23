#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED
#include <iostream>
#include<cstring>
class Product {
private:
	int sku;
	char brand[20];
	char model[20];
	char category[20];
	char color[20];
	size_t size;
	double price;
	size_t count;
public:
	Product();
	Product(int sku, const char* brand, const char* model, const char* category,
		const char* color, size_t size, double price, size_t count);

	void setSku(int sku);
	void setBrand(const char* brand);
	void setModel(const char* model);
	void setCategory(const char* category);
	void setColor(const char* color);
	void setSize(size_t size);
	void setPrice(double price);
	void setCount(size_t count);

	int getSku()const;
	const char* getBrand()const;
	const char* getModel()const;
	const char* getCategory()const;
	const char* getColor()const;
	size_t getSize()const;
	double getPrice()const;
	size_t getCount()const;
};
#endif // PRODUCT_H_INCLUDED

