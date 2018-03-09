//header file for romanType

#ifndef H_romanType
#define H_romanType

#include <string>

class romanType
{
public:
	romanType();
	romanType(std::string romanNumeral);
	std::string getRomanNumeral() const;
	void setRomanNumeral(std::string newRomanNumeral);
	void convert();
	void print(bool isRoman) const;

private:
	std::string romanNumeral = "";
	int convertedRomanNumeral = 0;
	int getValueFromSingle(char type);
	int getValueFromTwo(char type[2]);
};
#endif 
