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
    else if(check_board_full() == true)
    {
        winner = "C";
        return true;
    }
    
return false;
    
}

void TicTacToe::start_game(string first_player)
{
    clear_board();
    next_player = first_player;
}

void TicTacToe::mark_board(int position)
{
        pegs[position-1] = next_player;
        set_next_player();   
}


void TicTacToe::set_next_player()
{
    if(next_player == "X" || next_player == "x")
    {
        next_player = "O";
    }
    else
    {
        next_player = "X";
    }
   
}

bool TicTacToe::check_board_full()
{
    for(auto& p : pegs)
    {
        if(p == " ")
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
    return false;  
}

bool TicTacToe::check_row_win()
{
    return false;  
}

bool TicTacToe::check_diagonal_win()
{
    return false;
}

void TicTacToe::set_winner()
{
    if(next_player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}

std::istream& operator>>(std::istream& in, TicTacToe& t)
{
    
    if(t.pegs.size() == 9)
    {
        int position;
        cout << "\nPlease enter the position (1-9) on the board you wish to mark: ";
	    in >> position;
		while(position < 1 || position > 9)
    	{
        	cout << "Please enter a position between 1 and 9: ";
			in >> position;
    	}
		t.mark_board(position);
    }

    else if(t.pegs.size() == 16)
    {
        int position;
        cout << "\nPlease enter the position (1-16) on the board you wish to mark: ";
	    in >> position;
		while(position < 1 || position > 16)
    	{
        	cout << "Please enter a position between 1 and 16: ";
			in >> position;
    	}
		t.mark_board(position); 
    }
    
    return in;
}

std::ostream & operator<<(std::ostream & out, const TicTacToe & t)
{
    if(t.pegs.size() == 9)
    {
        for(int a = 0; a < t.pegs.size(); a++)
        {
            out << t.pegs[a] << "| ";
            if(a == 2 || a == 5 || a == 8)
            {
            out << "\n";
            }
        }
    }
    else if(t.pegs.size() == 16)
    {
        for(int a = 0; a < t.pegs.size(); a++)
        {
            out << t.pegs[a] << "| ";
            if(a == 3 || a == 7 || a == 11 || a == 15)
            {
            out << "\n";
            }
        }
    }

    return out;
}
