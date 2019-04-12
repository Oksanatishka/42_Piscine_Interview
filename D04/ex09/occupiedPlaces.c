#include "header.h"

//O(m) time, m - occupied spaces

int occupiedPlaces(unsigned int parkingRow)
{
	int i = 0;
	for (i = 0; parkingRow; i++)
		parkingRow = parkingRow & (parkingRow -1);	// parkingRow &= (parkingRow - 1);
	return i;
}
