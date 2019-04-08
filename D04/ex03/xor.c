#include "header.h"
#include <stdlib.h>

char *getXor(char *a, char *b)
{
	for(int i = 0; i < 6; i++)
	{	
		if (a[i] == b[i])
			a[i] = '0';
		else
			a[i] = '1';
	}
	return a;
}

int toInt(char *bits)
{
	return (int) strtol(bits, NULL, 2);
}
