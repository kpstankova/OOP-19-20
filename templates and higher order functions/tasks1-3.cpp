#include<iostream>
const int SIZE = 100;
//task 1
template<typename Type>
void input(Type* arr, int n) {
	for (int i = 0; i < n; i++){
		std::cin >> arr[i];
	}
}


//task 2
template <class Type>
bool ordered(Type* arr, int n) {
	for (int i = 1; i < n; i++) {
		if (arr[i - 1] > arr[i]) {
			return false;
		}
	}
	return true;
}

// task 3
template <typename Type>
bool member(Type* arr,int n, Type x) {
	for (int i = 0; i < n; i++){
		if (arr[i] == x){
			return true;
		}
	}
	return false;
}

int main() {
	int arr[SIZE], size, x;
	std::cout << "How many elements do you want to enter? ";
	std::cin >> size;
	input(arr, size);
	std::cout << ordered(arr, size) << std::endl;
	std::cout << "Which element do you want to search for? ";
	std::cin >> x;
	std::cout << member(arr,size, x) << std::endl;

	double arr2[SIZE];
	std::cout << "Again, how many elements do you want to enter? ";
	std::cin >> size;
	input(arr2, size);
	std::cout << ordered(arr2, size) << std::endl;

	char arr3[SIZE];
	std::cout << "How many symbols do you want to enter? ";
	std::cin >> size;
	input(arr3, size);
	std::cout << ordered(arr3, size) << std::endl;

	return 0;
}