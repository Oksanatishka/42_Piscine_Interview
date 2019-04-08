#include "header.h"
#include <math.h>

int			carPosition(unsigned int parkingRow)
{
	if (parkingRow != 0 && (!(parkingRow & (parkingRow - 1))))
	{
		return log2(parkingRow);
	}
	return -1;
}
