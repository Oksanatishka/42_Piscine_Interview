#include "header.h"

int leftmostCar(unsigned int parkingRow)
{
	int i = -1;
	for (i = -1; parkingRow; ++i)
		parkingRow >>=1;
	return i;
}
