//h
#include "tic_tac_toe.h"
#include <vector>
#include <memory>
using std::vector;

#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H

class TicTacToeData
{
public:
void save_games(const vector<std::unique_ptr<TicTacToe>> & games);
vector<std::unique_ptr<TicTacToe>> get_games();
};

#endif