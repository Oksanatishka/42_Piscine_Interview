#include "header.h"
#include <stdio.h>

void	aloneCan(int *arr, int n)
{
	int can = 0;
	for (int i = 0; i < n; i++)
		 can ^= arr[i];
	printf("%d\n", can);
}
