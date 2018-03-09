//program to calculate average number of calories burned

#include "stdafx.h"

#include <iostream>

using namespace std;

int main()
{
	int calBurnedInADay;
	int calBurnedInAWeek;
	int day;

	day = 1;
	calBurnedInAWeek = 0;

	while (day <= 7)
	{
		cout << "Enter calories burned each day " << day << ": ";
		cin >> calBurnedInADay;
		cout << endl;

		calBurnedInAWeek = calBurnedInAWeek + calBurnedInADay;
		day = day + 1;
	}

	cout << "Average number of calories burned each day: "
		<< calBurnedInAWeek / 7 << endl;
	system("Pause");
	return 0;
}

