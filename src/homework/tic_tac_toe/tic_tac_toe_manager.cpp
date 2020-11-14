//cpp
#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe_manager.h"
using std::cout; using std::cin; using std::string; using std::vector;

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe> & b)
{
    update_winner_count(b->get_winner());
    games.push_back(std::move(b));
}

void TicTacToeManager::get_winner_total(int & o, int & w, int & t)
{
    w = x_win;
    o = o_win;
    t = ties;
}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
    for(const auto& i : manager.games)
    {
        out << *i;
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