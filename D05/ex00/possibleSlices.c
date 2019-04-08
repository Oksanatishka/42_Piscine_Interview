#include "header.h"
#include <stdlib.h>

void	recurse(struct s_array *arr, int n)
{
	if (!n)
	{
		arrayPrint(arr);
		free(arr);
	}
	for (int i = n; i > 0; i--)
	{
		struct s_array *copy = arrayClone(arr);
		arrayAppend(copy, i);
		recurse(copy, n - i);
	}
}

void	printPossibleSlices(int pizzaSize)
{
	struct s_array	*arr = arrayInit();
	recurse(arr, pizzaSize);
}
