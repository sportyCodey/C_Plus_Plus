//This file can be used to test classes

#include "stdafx.h"
#include "patientType.h"

int main()
{
	patientType patient("Drew", 24, "700", 45.90, 34.23, 56.78, "Sam", 56, "Surgeon");
	patientType patient2;

	patient2.printPatient();
    return 0;
}

