#include "header.h"

void	recursion(int pizzaSize, double *best, double sum, double *prices)
{
	if (pizzaSize <= 0)
		if (sum > *best)
			*best = sum;
	for (int i = 1; i <= pizzaSize; i++)
		recursion(pizzaSize - i, best, sum + prices[i], prices);
}

double bestPrice(int pizzaSize, double *prices)
{
	double bestPrice = 0;
	recursion(pizzaSize, &bestPrice, 0, prices);
	return (bestPrice);
}
