#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_data.h"
#include <string>
#include <vector>
#include <iostream>
#include <memory>

using std::cout; using std::cin; using std::string; using std::vector;

int main() 
{
	
	string again = "Y";
	TicTacToeData data;
	TicTacToeManager m(data);
	std::unique_ptr<TicTacToe> game;
	string entry;
	int board;

	while(again == "Y" || again == "y")
	{
		

		cout << "Would you like to play on 3x3 board or 4x4? Enter 3 or 4: ";
		cin >> board;

		while(board < 3 || board > 4)
		{
			cout << "Please enter 3 or 4. ";
			cin >> board;
		}

		if(board == 3)
		{
			game = std::make_unique<TicTacToe3>();
		}
		else if(board == 4)
		{
			game = std::make_unique<TicTacToe4>();
		}

		cout << "Player 1, please enter X or O: ";
		cin >> entry;

		while(entry != "X" && entry != "x" && entry != "O" && entry != "o")
    	{
			cout << "Please enter 'X' or 'O': ";
			cin >> entry;
    	}
		
		game->start_game(entry);
		

		while(game->game_over() ==  false)
		{
			cin >> *game;
			cout << *game;
		}

		if(game->game_over() == true)
		{
			int x = 0;
			int o = 0;
			int t = 0;

			cout << "\nGame Over";
			cout << "\nThe winner is: " << game->get_winner() << "\n";

			m.save_game(game);
			m.get_winner_total(o, x, t);
			cout << "X won " << x << " games.\n";
			cout << "O won " << o << " games. \n";
			cout << "Ties: " << t << "\n";
			
			cout << "\nWould you like to play again? Please enter 'Y' or 'N': ";
			cin >> again;
		}
		
		
	}

	cout << "\n" << m;
	return 0;
}