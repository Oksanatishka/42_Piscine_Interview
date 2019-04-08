#include "header.h"

int minPersons(int elements, int minPercentage)
{
	int people = 1;
	double res = (double)elements;
	double i = 1;	
	if (minPercentage >= 100)
		return elements + 1;
	while ( i > 1 - (double)minPercentage / 100)
	{
		i *= ((res - people) /elements);
		people++;
	}
	return people;
}
