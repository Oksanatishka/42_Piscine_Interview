#include "header.h"

int longestSequence(unsigned int parkingRow)
{
	int i;
	for (i = 0 ; parkingRow; i++)
		parkingRow &= (parkingRow << 1);
	return i;
}
