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
    for(auto& i : manager.games)
    {
        out << *i << "\n";
    }

    out << "X won: " << manager.x_win << "\n";
    out << "O won: " << manager.o_win << "\n";
    out << "Ties: " << manager.ties << "\n";

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

TicTacToeManager::TicTacToeManager(TicTacToeData& d)
{
    games = d.get_games();
    for(auto& g : games)
    {
        update_winner_count(g->get_winner());
    }
}

