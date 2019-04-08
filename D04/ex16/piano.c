#include "header.h"
#include <stdlib.h>

int **pianoDecompress(struct s_bit *bit, int l)
{
	int **arr = malloc(sizeof(int *) *bit->n);
	for (int i = 0; i < bit->n; i++)
	{
		arr[i] = malloc(sizeof(int)* l-1);
		int j = 0;
		for (j = 0; bit->arr[i] -1; j++)
			bit->arr[i] = bit->arr[i] >> 1;
		arr[i][j] = 1;
	}
	return arr;
}
