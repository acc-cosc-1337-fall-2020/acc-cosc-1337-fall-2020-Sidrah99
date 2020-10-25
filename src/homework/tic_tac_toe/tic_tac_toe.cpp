//cpp
#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"
using std::cout; using std::cin; using std::string; using std::vector;

bool TicTacToe::game_over()
{
    if(check_board_full() == false)
    {
        return false;
    }
    else
    {
        return true;
    }
    
}

void TicTacToe::start_game(string first_player)
{
    clear_board();

    if(first_player == "X" || first_player == "x" || first_player == "O" || first_player == "o")
    {
        player = first_player;
    }
    else
    {
        cout << "Please enter 'X' or 'O'.";
    }
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::display_board()const
{
    for(int a = 0; a < pegs.size(); a++)
    {
        cout << pegs[a] << "| ";
        if(a == 2 || a == 5 || a == 8)
        {
            cout << "\n";
        }
    }
    
}

void TicTacToe::set_next_player()
{
    if(player == "X" || player == "x")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
   
}

bool TicTacToe::check_board_full()
{
    for(int i=0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }

    return true;
}

void TicTacToe::clear_board()
{
    for(int i = 0; i < pegs.size() - 1; i++)
    {
        pegs[i] = " ";
    }
}
