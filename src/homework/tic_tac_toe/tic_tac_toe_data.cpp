//cpp
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <iostream>
#include <fstream>
#include <string>
using std::ofstream; using std::ifstream; 

void TicTacToeData::save_games(const vector<std::unique_ptr<TicTacToe>> & games)
{
    ofstream file;
    file.open("games.txt");
    for(auto& i : games)
    {
        for(auto& c: i->get_pegs())
        {
            file << c;
        }
        
        file << i->get_winner();
        file << "\n";
    }
    file.close();
}
vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    vector<std::unique_ptr<TicTacToe>> boards;
    ifstream file;
    string line;

    file.open("games.txt");
    
    while(getline(file, line))
    {
        vector<string> pegs;

        for(auto&c : line)
        {
            string str(1,c);
            pegs.push_back(str);
        }

        string win = pegs[pegs.size()-1];
        pegs.resize(pegs.size()-1);
        
        std::unique_ptr<TicTacToe> board;

        if(pegs.size() == 9)
        {
            board = std::make_unique<TicTacToe3>(pegs, win);
        }
        else if(pegs.size() == 16)
        {
            board = std::make_unique<TicTacToe4>(pegs, win);
        }

        boards.push_back(std::move(board));
    }

    file.close();
    return boards;
}