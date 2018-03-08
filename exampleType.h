#ifndef H_exampleType
#define H_exampleType

/* need this class for fiddling with pointers in expandArray.cpp*/
class exampleType
{
public:
	exampleType();

	void doThis(exampleType type);

	void setX(int newX);
	
	void printX() const;
private:
	int x;
};
#endif 

