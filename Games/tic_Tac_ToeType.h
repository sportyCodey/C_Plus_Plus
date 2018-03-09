//header file for tic_Tac_ToeType

#ifndef H_tic_Tac_ToeType
#define H_tic_Tac_ToeType

#include <string>

class tic_Tac_ToeType
{
public:
	tic_Tac_ToeType();
	tic_Tac_ToeType(std::string player1, std::string player2);
	void move(int r, int c, std::string player);
	void printBoard() const;
	std::string getTurn() const;
	std::string getPlayer1() const;
	std::string getPlayer2() const;
	bool getEndOfGame() const;

private:
	std::string player1 = "B";
	std::string player2 = "R";
	std::string turn = "B";
	std::string board[3][3];
	const int BOARD_LENGTH = 3;
	bool endOfGame = false;
	bool legal(int r, int c) const;
	void changeTurns(std::string player);
	void setUpBoard();
	void winnerMessage(std::string player);
	void checkForWinner(std::string player);
};
#endif
