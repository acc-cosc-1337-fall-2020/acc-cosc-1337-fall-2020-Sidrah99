//Write the include statement for decisions.h here
#include <iostream>
#include "decision.h"
//Write namespace using statements for cout and cin

int main() 
{
	int grade;
	std::cout << "Enter a grade: ";
	std::cin >> grade;
	std:: cout << "Your grade is: " << get_letter_grade_using_if(grade) << "\n";
	std:: cout << "Your grade is: " << get_letter_grade_using_switch(grade);
	
	return 0;
}

