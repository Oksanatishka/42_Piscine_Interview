#include "header.h"

unsigned int	clearPlace(unsigned int parkingRow, int pos)
{
	parkingRow &= ~(1 << pos);
	return (parkingRow);
}
