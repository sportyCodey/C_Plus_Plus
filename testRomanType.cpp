#include "stdafx.h"
#include "romanType.h"


int main()
{
	romanType myNumeral("MCXIV");
	myNumeral.convert();
	
	romanType anotherNumeral("CCCLIX");
	anotherNumeral.convert();

	romanType romanNumeral("MDCLXVI");
	romanNumeral.convert();

	romanType lastOne("MMXLVI");
	lastOne.convert();

	myNumeral.print(false);
	anotherNumeral.print(false);
	romanNumeral.print(false);
	lastOne.print(false);
	
    return 0;
}

