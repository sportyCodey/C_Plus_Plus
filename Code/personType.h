//header file for another personType

#ifndef H_personType
#define H_personType

#include <string>

class personType
{
public:
	personType();

	personType(std::string newName, int newAge);

	std::string getName() const;

	int getAge() const;

	void setName(std::string newName);

	void setAge(int newAge);

	void printPerson() const;

private:
	std::string name;
	int age;
};
#endif
