//test file for Tic_Tac_ToeType

#include "stdafx.h"
#include <iostream>
#include <string>
#include "tic_Tac_ToeType.h"

void playGame(tic_Tac_ToeType game);
void welcome();

int main()
{
	int playAgain = 1;

	std::cout << "Welcome to Tic-Tac-Toe!" << std::endl;

	do
	{
		welcome();
		std::cout << "Do you want to play again (1 for yes. 0 for no)? ";
		std::cin >> playAgain;
	} while (playAgain == 1);

	//before exiting application
	std::cout << "Thanks for playing!" << std::endl;

    return 0;
}//end main

void playGame(tic_Tac_ToeType game)
{
	std::cout << "\nLet's get started!" << std::endl;
	std::cout << "Player 1 you are color: " << game.getPlayer1() << std::endl;
	std::cout << "Player 2 you are color: " << game.getPlayer2() << std::endl;

	int x, y;

	while (game.getEndOfGame() != true)
	{
		std::cout << "Player with color: " << game.getTurn() << ", you're up!" << std::endl;
		std::cout << "Choose a position on the board (row column) " << std::endl;
		game.printBoard();
		std::cin >> x;
		std::cin >> y;

		game.move(x, y, game.getTurn());
	} 
	game.printBoard();
}//end playGame

void welcome()
{
	std::string color1;
	std::string color2;

	std::cout << "Choose the color for each player (one letter)." << std::endl;
	std::cout << "If you don't care, then press 1 now!" << std::endl;
	std::cout << "Player 1 color: ";
	std::cin >> color1;

	if (color1 != "1")
	{
		std::cout << "Player 2 color: ";
		std::cin >> color2;

		tic_Tac_ToeType game(color1, color2);
		playGame(game);
	}
	else
	{
		tic_Tac_ToeType game;
		playGame(game);
	}
}//end welcome

