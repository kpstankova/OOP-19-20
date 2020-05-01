#include <iostream>
#include <fstream>
#include <cstring>
struct Human {
	char name[30];
	int age = 18;

	Human() {};
	Human(const char name[], const int age) {
		strcpy_s(this->name, 30, name);
		this->age = age;
	}
};

struct Human1 {
	char* name;
	int age;
	Human1() {
		name == nullptr;
		age = 0;
	}

	Human1(const char* name, int age) {
		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
		this->age = age;
	}
};
int main() {
	/*std::string temp;
	//ios::beg, ios::out, ios::binary, ios::in,
	//ios::app, ios::cur, ios::end, ios::trunc,
	//ios::ate


	//seekp,seekg,tellp, tellg

//писане
	std::ofstream write(".../test1.txt");
	if (write.is_open())
	{
		write << "First line";
		write.seekp(0);
		write << "Second line";
	}
	write.close();

//четене
	std::ifstream read(".../test1.txt");
	if (read.is_open())
	{
		while (!read.eof()) {
			read >> temp;
			std::cout << temp;
		}
	}
	read.seekg(std::ios::beg, std::ios::end);
	read.seekg(1);
	read.close();
	*/

	//четене от файл със зададена дължина
	/*std::ifstream myFile(".../test1.txt");
	if (!myFile)
	{
		return 0;
	}

	int size;
	char* temp;
	myFile >> size;
	temp = new char[size + 1];
	myFile.get();

	int i = 0;
	while (myFile.good() && !myFile.eof()) {
		myFile.get(temp[i++]);
	}
	temp[size] = '/0';
	myFile.close();
	std::cout << temp;
	*/

	//записване на масив от обекти без динамична памет в binary
	/*Human* arr = new Human[3];
	int size = 3;
	
	arr[0] = Human("Ivan", 20);
	arr[1] = Human("Martin", 20);
	arr[2] = Human("Rado", 20);

	std::ofstream writeFile("human.bin", std::ios::binary);
	if (!writeFile)
	{
		return 1;
	}

	writeFile.write((const char*)& size, sizeof(int));
	writeFile.write((const char*)& arr, size * sizeof(Human));
	writeFile.close();

	std::ifstream readFile("human.bin", std::ios::binary);
	if (!readFile)
	{
		return 1;
	}

	int sizeForRead;
	readFile.read((char*)& sizeForRead, sizeof(int));
	Human * arr1 = new Human[sizeForRead];
	readFile.read((char*)& arr1, sizeForRead * sizeof(Human));
	readFile.close();

	for (int  i = 0; i < sizeForRead; i++)
	{
		std::cout << arr1[i].name;
	}
	*/
	//записване на масив от обекти в binary с динамична памет

	int size = 3;
	Human1* arr = new Human1[size];
	arr[0] = Human1("Ivan", 20);
	arr[1] = Human1("Martin", 20);
	arr[2] = Human1("Rado", 20);

	// |, &





	std::ofstream file("human1.bin", std::ios::binary | std::ios::app);

	if (!file)
	{
		return 1;
	}

	file.write((const char*)& size, sizeof(int));
	for (int i = 0; i < size; i++)
	{
		int len = strlen(arr[i].name);
		file.write((const char*)& len, sizeof(int));
		file.write((const char*)& arr[i].name, len);
		file.write((const char*)& arr[i].age, sizeof(int));
	}
	file.close();
	std::ifstream file1("human1.bin", std::ios::binary);
	if (!file1)
	{
		return 0;
	}
	int size1;
	file1.read((char*)& size1, sizeof(int));
	Human1* arr1 = new Human1[size1];
	int temp;
	for (int  i = 0; i < size1; i++)
	{
		file1.read((char*)& temp, sizeof(int));
		arr1[i].name = new char[temp + 1];
		file1.read((char*)& arr1[i].name, temp);
		arr1[i].name[temp] = '/0';
		file1.read((char*)& arr1[i].age, sizeof(int));
	}

	for (int i = 0; i < size1; i++)
	{
		std::cout << arr[i].name << " " << arr[i].age;
	}
}