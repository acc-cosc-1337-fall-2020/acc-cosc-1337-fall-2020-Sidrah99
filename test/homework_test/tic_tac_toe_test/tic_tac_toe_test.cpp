#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "C:\Users\Sidrah\Desktop\acc-cosc-1337-fall-2020-Sidrah99\inc\catch.hpp"
#include "C:\Users\Sidrah\Desktop\acc-cosc-1337-fall-2020-Sidrah99\src\homework\tic_tac_toe\tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Tic Tac Toe Tie")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(9);
	game.mark_board(2);
	game.mark_board(4);
	game.mark_board(7);
	game.mark_board(5);
	game.mark_board(6);
	game.mark_board(8);
	game.mark_board(1);
	game.mark_board(3);
	REQUIRE(game.get_winner() == "C");
}

TEST_CASE("First Player is X")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
}

TEST_CASE("First Player is O")
{
	TicTacToe game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Win By First Column")
{
	TicTacToe game;
	game.start_game("X");	
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(4);
	game.mark_board(3);
	game.mark_board(7);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Win By Second Column")
{
	TicTacToe game;
	game.start_game("X");	
	game.mark_board(2);
	game.mark_board(3);
	game.mark_board(5);
	game.mark_board(6);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Win By Third Column")
{
	TicTacToe game;
	game.start_game("X");	
	game.mark_board(3);
	game.mark_board(4);
	game.mark_board(6);
	game.mark_board(7);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Win By First Row")
{
	TicTacToe game;
	game.start_game("X");	
	game.mark_board(1);
	game.mark_board(4);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(3);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Win By Second Row")
{
	TicTacToe game;
	game.start_game("X");	
	game.mark_board(4);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(7);
	game.mark_board(6);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Win By Third Row")
{
	TicTacToe game;
	game.start_game("X");	
	game.mark_board(7);
	game.mark_board(1);
	game.mark_board(8);
	game.mark_board(3);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Win Diagonally From Top Left")
{
	TicTacToe game;
	game.start_game("X");	
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(6);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Win Diagonally From Bottom Left")
{
	TicTacToe game;
	game.start_game("X");	
	game.mark_board(7);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(6);
	game.mark_board(3);
	REQUIRE(game.game_over() == true);

}