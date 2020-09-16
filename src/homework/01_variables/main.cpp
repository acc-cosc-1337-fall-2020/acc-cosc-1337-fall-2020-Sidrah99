//write include statements
#include <iostream>
#include <iomanip>
#include "variables.h"

//write namespace using statement for cout


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;
	std::cout << "Please enter the meal amount: ";
	std::cin >> meal_amount; 
	tax_amount = get_sales_tax_amount(meal_amount);
	std::cout << "Please enter the tip rate: ";
	std::cin >> tip_rate;
	tip_amount = get_tip_amount(meal_amount, tip_rate);
	total = meal_amount + tip_amount + tax_amount;
	std::cout << "Meal Amount: $" << std::fixed << std::setprecision(2) << meal_amount << '\n';
	std::cout << "Sales Tax: $" << std::fixed << std::setprecision(2) << tax_amount << '\n';
	std::cout << "Tip Amount: $" << std::fixed << std::setprecision(2) << tip_amount << '\n';
	std::cout << "Total: $" << std::fixed << std::setprecision(2) << total << '\n';
	return 0;
}

