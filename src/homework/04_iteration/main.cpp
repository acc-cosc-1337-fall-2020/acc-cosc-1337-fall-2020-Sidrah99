//write include statements
#include<iostream>
#include<string>
#include "dna.h"
//write using statements
using std::cout;
using std::cin;
using std::string;


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int user_choice;
	cout << "Please enter 1 to Get GC Content. Please enter 2 to Get DNA Complement: ";
	cin >> user_choice;
	if(user_choice == 1)
	{
		string str;
		cout << "Please enter a DNA string: ";
		cin >> str;
		cout << "Here is the GC Content for " << str << ": " << get_gc_content(str);
	}

	if(user_choice == 2)
	{
		string str;
		cout << "Please enter a DNA string: ";
		cin >> str;
		cout << "Here is the DNA Complement for " << str << ": " << get_dna_complement(str);
	}
	
	return 0;
}