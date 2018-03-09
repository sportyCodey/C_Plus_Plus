//gets input from user about football player and displays to file

#include <iostream>
#include <fstream>
#include <string>

struct footballPlayer 
{
	std::string name;
	std::string position;
	std::string number;
	int numOfTouchdowns;
	int numOfCatches;
	int numOfPassingYards;
	int numOfReceivingYards;
	int numOfRushingYards;
};

const int NUM_OF_FOOTBALL_PLAYERS = 10;
int index = 0;

void initialize(footballPlayer players[]);
void inputData(footballPlayer players[]);
void outputData(footballPlayer players[]);
void findPlayerByNumber(footballPlayer players[]);
void findPlayer(footballPlayer players[]);
void updatePlayerStats(footballPlayer players[]);
void showMenu();
void showData(int input, footballPlayer players[]);
void writeToFile(footballPlayer players[]);

int main()
{
	std::cout << "Welcome to My Football Player!" << std::endl;
	
	struct footballPlayer players[NUM_OF_FOOTBALL_PLAYERS];
	initialize(players);
	
	int input;
	while (std::cin)
	{
		showMenu();
		std::cin >> input;
		
		switch (input)
		{
			case 1: inputData(players); break;
			case 2: outputData(players); break;
			case 3: findPlayerByNumber(players); break;
			case 4: findPlayer(players); break;
			case 5: updatePlayerStats(players); break;
			case 6: writeToFile(players); break;
			default: std::cout << "Invalid input" << std::endl;
		}
	}
	
	return 0;
}//end main

void showMenu()
{
	std::cout << "Please select an option from below (press a letter key to exit): " << std::endl;
	std::cout << "\t1.) Input Data" << std::endl;
	std::cout << "\t2.) Output Data" << std::endl;
	std::cout << "\t3.) Search player up by number" << std::endl;
	std::cout << "\t4.) Search player up by name" << std::endl;
	std::cout << "\t5.) Update player stats" << std::endl;
	std::cout << "\t6.) Finish and write to file" << std::endl;
}

void inputData(footballPlayer players[])
{	
	if (index >= 10)
	{
		std::cout << "There is no more room to add players." << std::endl;
		return;
	}
	
	std::cout << "What is the player's name? ";
	std::cin >> players[index].name;
	
	std::cout << "What is the player's position? ";
	std::cin >> players[index].position;
	
	std::cout << "What is the player's number? ";
	std::cin >> players[index].number;
	
	std::cout << "What is the number of touchdowns? ";
	std::cin >> players[index].numOfTouchdowns;

	std::cout << "What is the number of catches? ";
	std::cin >> players[index].numOfCatches;
	
	std::cout << "What is the number of passing yards? ";
	std::cin >> players[index].numOfPassingYards;
	
	std::cout << "What is the number of receiving yards? ";
	std::cin >> players[index].numOfReceivingYards;
	
	std::cout << "What is the number of rushing yards? ";
	std::cin >> players[index].numOfRushingYards;
	
	index++;
}//end inputData

void outputData(footballPlayer players[])
{	
	if (players[0].name.empty())
	{
		std::cout << "There is no data yet!" << std::endl;
	}
	
	std::cout << "This is what you have so far: " << "\n" << std::endl;
	
	int i;
	std::string output = "";
	for (i = 0; i < NUM_OF_FOOTBALL_PLAYERS; i++)
	{
		if (!players[i].name.empty()) 
		{
			output += players[i].name + " " + players[i].position + " " + players[i].number + " "
			+ std::to_string(players[i].numOfTouchdowns) + " " + std::to_string(players[i].numOfCatches) + " " + 
			std::to_string(players[i].numOfPassingYards) +
			" " + std::to_string(players[i].numOfReceivingYards) + " " + std::to_string(players[i].numOfRushingYards) + "\n";
			std::cout << output;
			output = "";
		}
	}
	std::cout << std::endl;
}//end outputData

void findPlayerByNumber(footballPlayer players[])
{
	std::string key;
	std::string output = "";
	
	std::cout << "Enter player number: ";
	std::cin >> key;
	
	int i;
	for (i = 0; i < NUM_OF_FOOTBALL_PLAYERS; i++)
	{
		if (players[i].number.compare(key) == 0) 
		{
			output += players[i].name + "\n";
		}
	}
	
	if (output.empty())
	{
		std::cout << "There is no player of that number!" << std::endl;
	}
	else 
	{
		std::cout << "Number: " << key << " is " << output << std::endl;
	}
}//end findPlayersByNumber

void findPlayer(footballPlayer players[])
{
	std::string key;
	std::string output = "";
	
	std::cout << "Enter player name: ";
	std::cin >> key;
	
	int i;
	for (i = 0; i < NUM_OF_FOOTBALL_PLAYERS; i++)
	{
		if (players[i].name.compare(key) == 0)
		{
			output += players[i].number + "\n";
		}
	}
	
	if (output.empty())
	{
		std::cout << "There is no player of that name!" << std::endl;
	}
	else
	{
		std::cout << "Player " << key << " is number " << output << std::endl;
	}
}//end findPlayer

void updatePlayerStats(footballPlayer players[])
{
	if (players[0].name.empty())
	{
		std::cout << "There's no data to update!" << std::endl;
		return;
	}
	
	int input;
	
	std::cout << "What player do you want to update (Press the number)? " << std::endl;
	
	int i;
	for (i = 0; i < NUM_OF_FOOTBALL_PLAYERS; i++)
	{
		if (!players[i].name.empty())
		{
			std::cout << i + 1 << ". " << players[i].name << std::endl;
		}
	}
	
	std::cin >> input;
	
	int choice;
	std::cout << "Which statistic/info do you want to change (Press the number. Press 0 to stop editing)? " << std::endl;
	showData(input - 1, players);
	std::cin >> choice;
	
	std::string info;
	int stat;
	while (choice != 0)
	{
		std::cout << "What do you want to change about this? ";
		switch (choice)
		{
			case 1: std::cin >> info; players[input - 1].name = info; break;
			case 2: std::cin >> info; players[input - 1].position = info; break;
			case 3: std::cin >> info; players[input - 1].number = info; break;
			case 4: std::cin >> stat; players[input - 1].numOfTouchdowns = stat; break;
			case 5: std::cin >> stat; players[input - 1].numOfCatches = stat; break;
			case 6: std::cin >> stat; players[input - 1].numOfPassingYards = stat; break;
			case 7: std::cin >> stat; players[input - 1].numOfReceivingYards = stat; break;
			case 8: std::cin >> stat; players[input - 1].numOfRushingYards = stat; break;
			default: std::cout << "Invalid input";
		}
		
		std::cout << "Which statistic/info do you want to change (Press the number. Press 0 to stop editing)? " << std::endl;
		showData(input - 1, players);
		std::cin >> choice;
	}
}//end updatePlayerStats

void showData(int input, footballPlayer players[])
{
	std::cout << "1. " << players[input].name << std::endl;
	std::cout << "2. " << players[input].position << std::endl;
	std::cout << "3. " << players[input].number << std::endl;
	std::cout << "4. " << players[input].numOfTouchdowns << std::endl;
	std::cout << "5. " << players[input].numOfCatches << std::endl;
	std::cout << "6. " << players[input].numOfPassingYards << std::endl;
	std::cout << "7. " << players[input].numOfReceivingYards << std::endl;
	std::cout << "8. " << players[input].numOfRushingYards << std::endl;
}

void initialize(footballPlayer players[])
{
	int i;
	for (i = 0; i < NUM_OF_FOOTBALL_PLAYERS; i++) 
	{
		players[i].name = "";
	}
}

void writeToFile(footballPlayer players[])
{
	std::ofstream outData;
	
	int input;
	std::cout << "Are you sure you want to make the file now? If yes, then you won't be able to edit anymore (1 for yes. 2 for no). ";
	std::cin >> input;
	
	if (input == 2) 
	{
		return;
	}
	
	outData.open("Football Players.txt"); 
	
	int i;
	for (i = 0; i < NUM_OF_FOOTBALL_PLAYERS; i++)
	{
		if (!players[i].name.empty())
		{
			outData << players[i].name + " ";
			outData << players[i].position + " ";
			outData << players[i].number + " ";
			outData << std::to_string(players[i].numOfTouchdowns) + " ";
			outData << std::to_string(players[i].numOfCatches) + " ";
			outData << std::to_string(players[i].numOfPassingYards) + " ";
			outData << std::to_string(players[i].numOfReceivingYards) + " ";
			outData << std::to_string(players[i].numOfRushingYards) + " ";
			outData << "\n";
		}
	}
	
	outData.close();
}