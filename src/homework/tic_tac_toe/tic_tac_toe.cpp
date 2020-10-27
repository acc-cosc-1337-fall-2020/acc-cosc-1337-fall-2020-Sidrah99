//cpp
#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"
using std::cout; using std::cin; using std::string; using std::vector;

bool TicTacToe::game_over()
{
    if(check_column_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_row_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_column_win() == false && check_row_win() == false && check_diagonal_win() == false && check_board_full() == true)
    {
        winner = "C";
        return true;
    }
    
return false;
    
}

void TicTacToe::start_game(string first_player)
{
    clear_board();
    player = first_player;
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

bool TicTacToe::check_column_win()
{

    if(pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
    {
        return true;
    }

    else if(pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
    {
        return true;
    }

    else if(pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
    {
        return true;
    }

    else if(pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
    {
        return true;
    }

    else if(pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
    {
        return true;
    }

    else if(pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
    {
        return true;
    }

    return false;  
}

bool TicTacToe::check_row_win()
{
    if(pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
    {
        return true;
    }
   
    else if(pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
    {
        return true;
    }

    else if(pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
    {
        return true;
    }
   
    else if(pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
    {
        return true;
    }
    else if(pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
    {
        return true;
    }
   
    else if(pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
    {
        return true;
    }

    return false;  
}

bool TicTacToe::check_diagonal_win()
{
    
        if(pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
        {
            return true;
        }
    
        else if(pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
        {
            return true;
        }

        else if(pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X")
        {
            return true;
        }
    
        else if(pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O")
        {
            return true;
        }
    
    return false;
}

void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}