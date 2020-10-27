#include "tic_tac_toe.h"
#include <string>
#include <vector>
#include <iostream>
using std::cout; using std::cin; using std::string; using std::vector;

int main() 
{
	string again = "Y";

	while(again == "Y" || again == "y")
	{
		TicTacToe game;
		string entry;
		int position;

		cout << "Player 1, please enter X or O: ";
		cin >> entry;

		while(entry != "X" && entry != "x" && entry != "O" && entry != "o")
    	{
			cout << "Please enter 'X' or 'O': ";
			cin >> entry;
    	}
	
		game.start_game(entry);

		cout << "\nPlease enter the position on the board you wish to mark: ";
		cin >> position;
		while(position < 1 || position > 9)
    	{
        		cout << "Please enter a position between 1 and 9: ";
				cin >> position;
    	}
		game.mark_board(position);
		game.display_board();
		
		while(game.game_over() ==  false)
		{
			cout << "\nPlease enter the position on the board you wish to mark: ";
			cin >> position;
			while(position < 1 || position > 9)
    		{
        		cout << "Please enter a position between 1 and 9: ";
				cin >> position;
    		}
    	
			game.mark_board(position);
			game.display_board();
		}

		if(game.game_over() == true)
		{
			cout << "\nGame Over";
			cout << "\nThe winner is: " << game.get_winner();
			cout << "\nWould you like to play again? Please enter 'Y' or 'N': ";
			cin >> again;
		}
	}
	return 0;
}