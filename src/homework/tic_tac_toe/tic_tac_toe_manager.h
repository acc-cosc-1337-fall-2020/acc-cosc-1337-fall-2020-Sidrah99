//h
#include "tic_tac_toe.h"
#include<vector>
#include<memory>
#include<string>
using std::vector; using std::string;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{

public:
void save_game(std::unique_ptr<TicTacToe> & b);
void get_winner_total(int & o, int & w, int & t);
friend std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager);


private:
vector<std::unique_ptr<TicTacToe>> games;
int o_win = { 0 };
int x_win = { 0 };
int ties = { 0 };
void update_winner_count(string winner);

};

#endif
