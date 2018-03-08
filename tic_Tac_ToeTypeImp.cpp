#include "stdafx.h"
#include <iostream>
#include <string>
#include "tic_Tac_ToeType.h"

tic_Tac_ToeType::tic_Tac_ToeType()
{
	player1 = "B";
	player2 = "R";
	turn = "B";
	setUpBoard();
	endOfGame = false;
}

tic_Tac_ToeType::tic_Tac_ToeType(std::string newPlayer1, std::string newPlayer2)
{
	if (newPlayer1.compare("O") == 0 || newPlayer1.compare("o") == 0)
		player1 = "B";
	else
		player1 = newPlayer1;
	if (newPlayer2.compare("O") == 0 || newPlayer2.compare("o") == 0
		|| newPlayer2.compare(player1) == 0)
		player2 = "R";
	else
		player2 = newPlayer2;
	turn = player1;
	setUpBoard();
	endOfGame = false;
}

std::string tic_Tac_ToeType::getPlayer1() const
{
	return player1;
}

std::string tic_Tac_ToeType::getPlayer2() const
{
	return player2;
}

void tic_Tac_ToeType::checkForWinner(std::string player) 
{
	int win = 0;
	int i;
	int j;
	/* check horizontal */
	for (i = 0; i < BOARD_LENGTH; i++)
	{
		win = 0;
		for (j = 0; j < BOARD_LENGTH; j++)
		{
			if (board[i][j] == player)
				win++;
		}
		if (win == 3)
		{
			winnerMessage(player);
			return;
		}
	}

	win = 0;
	/* check vertical */
	for (i = 0; i < BOARD_LENGTH; i++)
	{
		win = 0;
		for (j = 0; j < BOARD_LENGTH; j++)
		{
			if (board[j][i] == player)
				win++;
		}
		if (win == 3)
		{
			winnerMessage(player);
			return;
		}
	}

	win = 0;
	j = 0;
	/* check left to right diagonal */
	for (i = 0; i < BOARD_LENGTH; i++)
	{
		if (board[i][j] == player)
		{
			win++;
		}
		if (win == 3)
		{
			winnerMessage(player);
			return;
		}
		j++;
	}

	j = 2;
	win = 0;
	/* check right to left diagonal */
	for (i = 0; i < BOARD_LENGTH; i++)
	{
		if (board[j][i] == player)
		{
			win++;
		}
		if (win == 3)
		{
			winnerMessage(player);
			return;
		}
		j--;
	}
}//end checkForWinner

void tic_Tac_ToeType::winnerMessage(std::string player)
{ 
	std::cout << "Player with the color: " << player << " wins!" << std::endl;
	endOfGame = true;
}

bool tic_Tac_ToeType::legal(int r, int c) const
{
	if (r > BOARD_LENGTH || r < 0 || c > BOARD_LENGTH || c < 0)
	{
		return false;
	}
	if (r < 2)
	{
		if (board[r + 1][c] == "O" ||
			board[r + 1][c] == "O")
			return false;
	}
	if (board[r][c].compare(player1) == 0 || board[r][c].compare(player2) == 0)
	{
		return false;
	}
	return true;
}

void tic_Tac_ToeType::changeTurns(std::string player)
{
	if (player == player1)
		turn = player2;
	else
		turn = player1;
}

std::string tic_Tac_ToeType::getTurn() const
{
	return turn;
}

void tic_Tac_ToeType::move(int r, int c, std::string player)
{
	if (legal(r, c))
	{
		board[r][c] = player;
		checkForWinner(player);
		changeTurns(player);
	}
	else 
	{
		std::cout << "Invalid move! Try again" << std::endl;
	}
}

void tic_Tac_ToeType::setUpBoard()
{
	int i;
	int j;
	for (i = 0; i < BOARD_LENGTH; i++)
	{
		for (j = 0; j < BOARD_LENGTH; j++)
		{
			board[i][j] = "O";
		}
	}
}

void tic_Tac_ToeType::printBoard() const
{
	int i;
	int j;
	for (i = 0; i < BOARD_LENGTH; i++)
	{
		for (j = 0; j < BOARD_LENGTH; j++)
		{
			std::cout << board[i][j];
		}
		std::cout << std::endl;
	}
}

bool tic_Tac_ToeType::getEndOfGame() const
{
	return endOfGame;
}


