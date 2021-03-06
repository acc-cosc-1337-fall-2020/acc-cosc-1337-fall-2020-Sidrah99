//h
#include <string>
#include <vector>
using std::string; using std::vector;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{

private:
string next_player;
string winner; 
void set_next_player();
bool check_board_full();
void clear_board();
void set_winner();


protected: 
vector<string> pegs; 
virtual bool check_column_win();
virtual bool check_row_win();
virtual bool check_diagonal_win();


public:
TicTacToe(){};
TicTacToe(int size): pegs(size*size, " "){}; 
TicTacToe(vector<string> p, string win) : winner{ win }, pegs{ p }{};
virtual ~TicTacToe(){};
bool game_over();
void start_game(string first_player);
void mark_board(int position);
string get_player()const { return next_player; };
string get_winner()const { return winner; };
vector<string> get_pegs() const { return pegs; };
friend std::istream& operator>>(std::istream& in, TicTacToe& t);
friend std::ostream & operator<<(std::ostream & out, const TicTacToe & t);

};

#endif