//cpp
#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe_manager.h"
using std::cout; using std::cin; using std::string; using std::vector;

void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}

void TicTacToeManager::get_winner_total(int & o, int & w, int & t)
{
    o = o_win;
    w = x_win;
    t = ties;
}

std::ostream & operator<<(std::ostream & out, TicTacToeManager & manager)
{
    for(int i=0; i < manager.games.size(); i++)
    {
        out << manager.games[i];
        out << "\n";
    }

    return out;
}

void TicTacToeManager::update_winner_count(string winner)
{
    if(winner == "X")
    {
        x_win++;
    }
    else if(winner == "O")
    {
        o_win++;
    }
    else
    {
        ties++;
    }
    
}