//write includes statements
#include <iostream>
#include "loops.h"
//write using statements for cin and cout
using std::cout; using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
		int again = 1;
	
	do 
	{
		int num;
		int result;
		
		num = 1;
		while(num >=1 && num <=10)
		{
			cout << "Enter a number between 1 and 10: ";
			cin >> num;
			result = factorial(num);
		
			cout << "\n";
		
			cout << "The factorial for " << num << " is: " << result;
		
			cout << "\n";
		
			cout << "Press 1 if you want to try again.";
			cin >> again;
		}
	}

	while(again == 1);
	

	return 0;
}