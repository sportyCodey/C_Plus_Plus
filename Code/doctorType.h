//header file for doctorType

#ifndef H_doctorType
#define H_doctorType

#include <string>
#include "personType.h"

class doctorType : public personType
{
public:
	doctorType();

	doctorType(std::string newName, int age, std::string newSpeciality);

	std::string getSpeciality() const;

	void setSpeciality(std::string newSpeciality);

	void printDoctor() const;

private:
	std::string speciality;

};
#endif

