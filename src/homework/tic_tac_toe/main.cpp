#include "tic_tac_toe.h"
#include <string>
#include <vector>
#include <iostream>
using std::cout; using std::cin; using std::string; using std::vector;

int main() 
{
	TicTacToe game;
	string entry;
	int position;


	cout << "Player 1, please enter X or O: ";
	cin >> entry;
	game.start_game(entry);
	cout << "\nPlease enter the position on the board you wish to mark (1-9): ";
	cin >> position;
	game.mark_board(position);
	game.display_board();

	while(game.game_over() ==  false)
	{
		cout << "\nPlease enter the position on the board you wish to mark (1-9): ";
		cin >> position;
		game.mark_board(position);
		game.display_board();
	}
	if(game.game_over() == true)
	{
		cout << "Game Over";
	}

	return 0;
}