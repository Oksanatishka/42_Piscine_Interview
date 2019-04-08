#include "header.h"
#include <math.h>

int			rightmostCar(unsigned int parkingRow)
{
	if (parkingRow != 0)
		return log2(parkingRow&-parkingRow);
	return -1;
}
