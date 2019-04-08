#include "header.h"

int carPosition(unsigned int parkingRow)
{
	int count = 0;
	int i;

	for (i = 0; parkingRow; i++)
	{
		if (parkingRow & 1)
			count++;
		parkingRow >>= 1;
	}
	if (!i || count != 1)
		return -1;
	return i- 1;
}
