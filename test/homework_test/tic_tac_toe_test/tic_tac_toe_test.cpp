#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}



TEST_CASE("Test Tic Tac Toe Board Slots 3x3")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(9);
	game->mark_board(2);
	game->mark_board(4);
	game->mark_board(7);
	game->mark_board(5);
	game->mark_board(6);
	game->mark_board(8);
	game->mark_board(1);
	game->mark_board(3);
	REQUIRE(game->get_winner() == "C");
}

TEST_CASE("Test Tic Tac Toe Board Slots 4x4")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(9);
	game->mark_board(2);
	game->mark_board(4);
	game->mark_board(7);
	game->mark_board(5);
	game->mark_board(6);
	game->mark_board(8);
	game->mark_board(1);
	game->mark_board(3);
	game->mark_board(12);
	game->mark_board(10);
	game->mark_board(14);
	game->mark_board(13);
	game->mark_board(11);
	game->mark_board(16);
	game->mark_board(15);
	REQUIRE(game->get_winner() == "C");
}

TEST_CASE("First Player is X for 3x3")
{
	std::unique_ptr<TicTacToe> game;	
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	REQUIRE(game->get_player() == "X");
}

TEST_CASE("First Player is O for 3X3")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("O");
	REQUIRE(game->get_player() == "O");
}

TEST_CASE("First Player is X for 4x4")
{
	std::unique_ptr<TicTacToe> game;	
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	REQUIRE(game->get_player() == "X");
}

TEST_CASE("First Player is O for 4x4")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("O");
	REQUIRE(game->get_player() == "O");
}

TEST_CASE("Win By First Column 3x3")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");	
	game->mark_board(1);
	game->mark_board(2);
	game->mark_board(4);
	game->mark_board(3);
	game->mark_board(7);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Win By First Column 4x4")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");	
	game->mark_board(1);
	game->mark_board(2);
	game->mark_board(5);
	game->mark_board(3);
	game->mark_board(9);
	game->mark_board(8);
	game->mark_board(13);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Win By Second Column 3x3")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");	
	game->mark_board(2);
	game->mark_board(3);
	game->mark_board(5);
	game->mark_board(6);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Win By Second Column 4x4")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");	
	game->mark_board(2);
	game->mark_board(3);
	game->mark_board(6);
	game->mark_board(7);
	game->mark_board(10);
	game->mark_board(8);
	game->mark_board(14);
	REQUIRE(game->game_over() == true);

}
TEST_CASE("Win By Third Column 3x3")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");	
	game->mark_board(3);
	game->mark_board(4);
	game->mark_board(6);
	game->mark_board(7);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Win By Third Column 4x4")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");	
	game->mark_board(3);
	game->mark_board(4);
	game->mark_board(7);
	game->mark_board(8);
	game->mark_board(11);
	game->mark_board(2);
	game->mark_board(15);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Win By First Row 3x3")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");	
	game->mark_board(1);
	game->mark_board(4);
	game->mark_board(2);
	game->mark_board(5);
	game->mark_board(3);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Win By First Row 4x4")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");	
	game->mark_board(1);
	game->mark_board(5);
	game->mark_board(2);
	game->mark_board(9);
	game->mark_board(3);
	game->mark_board(10);
	game->mark_board(4);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Win By Second Row 3x3")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");	
	game->mark_board(4);
	game->mark_board(2);
	game->mark_board(5);
	game->mark_board(7);
	game->mark_board(6);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Win By Second Row 4x4")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");	
	game->mark_board(5);
	game->mark_board(2);
	game->mark_board(6);
	game->mark_board(10);
	game->mark_board(7);
	game->mark_board(9);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Win By Third Row 3x3")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");	
	game->mark_board(7);
	game->mark_board(1);
	game->mark_board(8);
	game->mark_board(3);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Win By Third Row 4x4")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");	
	game->mark_board(9);
	game->mark_board(1);
	game->mark_board(10);
	game->mark_board(7);
	game->mark_board(11);
	game->mark_board(3);
	game->mark_board(12);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Win Diagonally From Top Left 3x3")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");	
	game->mark_board(1);
	game->mark_board(2);
	game->mark_board(5);
	game->mark_board(6);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Win Diagonally From Top Left 4x4")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");	
	game->mark_board(1);
	game->mark_board(2);
	game->mark_board(6);
	game->mark_board(7);
	game->mark_board(11);
	game->mark_board(8);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Win Diagonally From Bottom Left 3x3")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");	
	game->mark_board(7);
	game->mark_board(2);
	game->mark_board(5);
	game->mark_board(6);
	game->mark_board(3);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Win Diagonally From Bottom Left 4x4")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");	
	game->mark_board(13);
	game->mark_board(2);
	game->mark_board(10);
	game->mark_board(8);
	game->mark_board(7);
	game->mark_board(6);
	game->mark_board(4);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test 'O' wins 3x3")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	TicTacToe m;

	game->start_game("O");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == true);

	REQUIRE(game->get_winner() == "O");

}

TEST_CASE("Test 'O' wins 4x4")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	TicTacToe m;

	game->start_game("O");

	game->mark_board(9);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(10);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == false);

	game->mark_board(11);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == false);

	game->mark_board(12);
	REQUIRE(game->game_over() == true);

	REQUIRE(game->get_winner() == "O");

}

TEST_CASE("Test 'X' wins 3x3")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	TicTacToe m;

	game->start_game("X");

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == true);

	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test 'X' wins 4x4")
{
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	TicTacToe m;

	game->start_game("X");

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == false);

	game->mark_board(10);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == false);

	game->mark_board(14);
	REQUIRE(game->game_over() == true);
	
	REQUIRE(game->get_winner() == "X");

}