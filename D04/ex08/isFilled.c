#include "header.h"

//the idea here is to check of (index & index +1)

int isFilled(unsigned int parkingRow)
{
	return parkingRow && (parkingRow & (-(~parkingRow))) == 0;	
}
