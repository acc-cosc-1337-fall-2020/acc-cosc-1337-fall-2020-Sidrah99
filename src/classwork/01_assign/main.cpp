//Write the include statement for types.h here
#include <iostream>
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen



int main() 
{
	int num, result;
	std::cin >> num;
	result = multiply_numbers(num);
	std::cout << result;
	int num1 = 4;
	result = multiply_numbers(num1);
	std::cout << '\n' << result;

	return 0;
}

