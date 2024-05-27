#include <iostream>
#include "Functions.h"
#include "Structures.hpp"
#include "Data.hpp"




int main() {
	setlocale(LC_ALL, "ru");
	int n;
	
	say_hi();
	std::cout << new_str(4, '!') << std::endl;

	const int size = 4;
	int arr[size]{ 42,7,15,105 };
	print_arr(arr, size);

	Person p1 { "Tom Smith", 25, "programer" };
	print_person(p1);

	_A = 7; 
	std::cout << "A = " << _A << std::endl;
	std::cout << "PI = " << _PI << std::endl;
	print_arr(_ARR, _SIZE);
	


	return 0;
}