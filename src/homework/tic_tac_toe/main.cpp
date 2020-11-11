#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <string>
#include <vector>
#include <iostream>
using std::cout; using std::cin; using std::string; using std::vector;

int main() 
{
	
	string again = "Y";
	TicTacToeManager m;	
	while(again == "Y" || again == "y")
	{
		TicTacToe game;
		string entry;

		cout << "Player 1, please enter X or O: ";
		cin >> entry;

		while(entry != "X" && entry != "x" && entry != "O" && entry != "o")
    	{
			cout << "Please enter 'X' or 'O': ";
			cin >> entry;
    	}
	
		game.start_game(entry);

		cin >> game;
		cout << game;

		while(game.game_over() ==  false)
		{
			cin >> game;
			cout << game;
		}

		if(game.game_over() == true)
		{
			int x = 0;
			int o = 0;
			int t = 0;

			cout << "\nGame Over";
			cout << "\nThe winner is: " << game.get_winner() << "\n";
			
			m.save_game(game);
			m.get_winner_total(o, x, t);
			cout << "X won " << x << " games.\n";
			cout << "O won " << o << " games.\n";
			cout << "Tied Games: " << t << "\n";

			cout << "\nWould you like to play again? Please enter 'Y' or 'N': ";
			cin >> again;
		}
		
		
	}

	cout << m;
	return 0;
}