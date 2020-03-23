#include "Product.h"

Product::Product(){
	setSku(0);
	setBrand("Default");
	setModel("Default");
	setCategory("Default");
	setColor("Default");
	setSize(0);
	setPrice(0.0);
	setCount(0);
}

Product::Product(int sku, const char* brand, const char* model, const char* category, const char* color, size_t size, double price, size_t count)
{
	setSku(sku);
	setBrand(brand);
	setModel(model);
	setCategory(category);
	setColor(color);
	setSize(size);
	setPrice(price);
	setCount(count);
}

void Product::setSku(int sku)
{
	this->sku = sku;
}

void Product::setBrand(const char* brand)
{
	strcpy_s(this->brand, 20, brand);
}

void Product::setModel(const char* model)
{
	strcpy_s(this->model, 20, model);
}

void Product::setCategory(const char* category)
{
	strcpy_s(this->category,20, category);
}

void Product::setColor(const char* color)
{
	strcpy_s(this->color, 20, color);
}

void Product::setSize(size_t size)
{
	this->size = size;
}

void Product::setPrice(double price)
{
	this->price = price;
}

void Product::setCount(size_t count)
{
	this->count = count;
}

int Product::getSku() const
{
	return this->sku;
}

const char* Product::getBrand() const
{
	return this->brand;
}

const char* Product::getModel() const
{
	return this->model;
}

const char* Product::getCategory() const
{
	return this->category;
}

const char* Product::getColor() const
{
	return this->color;
}

size_t Product::getSize() const
{
	return this->size;
}

double Product::getPrice() const
{
	return this->price;
}

size_t Product::getCount() const
{
	return this->count;
}
