//This program reads info from file and displays student's grade's to file

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>

struct studentType
{
	std::string studentLName;
	std::string studentFName;
	int testScore;
	char grade;
};

const int NUMBER_OF_STUDENTS = 20;

void readData(std::ifstream& inData, std::ofstream& outData, studentType students[]);
char assignGrades(int score);
int getHighestScores(std::string& topStudents, studentType students[]);
void printHighestScores(std::ofstream& outData, studentType students[]);

int main()
{
	std::ifstream inData;
	std::ofstream outData;
	
	studentType students[NUMBER_OF_STUDENTS];
	
	readData(inData, outData, students);
	printHighestScores(outData, students);
	
	return 0;
}//end main

void readData(std::ifstream& inData, std::ofstream& outData, studentType students[])
{
	int index = 0;
	
	std::string lastName;
	std::string firstName;
	std::string testScore;
	
	int score;
	
	inData.open("data.txt");
	outData.open("studentGrades.txt");
	
	outData << std::left;
	
	outData << std::setw(25) << "Name" << std::setw(20) << "Test Score" << std::setw(5) << "Grade\n";
	
	inData >> lastName >> firstName >> testScore;
	
	std::stringstream conversion(testScore);
	conversion >> score;
	
	while (inData)
	{
		students[index].studentLName = lastName;
		students[index].studentFName = firstName;
		students[index].testScore = score;
		students[index].grade = assignGrades(score);
		
		outData << std::setw(25) << lastName + " " + firstName << std::setw(20) << testScore <<
		 students[index].grade << "\n";
		inData >> lastName >> firstName >> testScore;
		std::stringstream conversion(testScore);
		conversion >> score;
		index++;
	}
		
	inData.close();
}//end readData

char assignGrades(int score)
{
	if (score >= 90)
		return 'A';
	if (score >= 80)
		return 'B';
	if (score >= 70)
		return 'C';
	if (score >= 60)
		return 'D';
	else
		return 'F';
}

void printHighestScores(std::ofstream& outData, studentType students[]) 
{
	std::string topStudents;
	int max;
	
	max = getHighestScores(topStudents, students);
	
	outData << "\nThe highest score is: " << max << "\n";
	outData << "The student(s) who got this score are: \n" << topStudents;
	
	outData.close();
}

int getHighestScores(std::string& topStudents, studentType students[])
{
	int i;
	int max = 0;
	for (i = 0; i < NUMBER_OF_STUDENTS; i++)
	{
		if (students[i].testScore > max) 
		{
			max = students[i].testScore;
		}
	}
	for (i = 0; i < NUMBER_OF_STUDENTS; i++)
	{
		if (students[i].testScore == max)
		{
			topStudents += students[i].studentLName + " " + students[i].studentFName + "\n";
		}
	}
	return max;
}