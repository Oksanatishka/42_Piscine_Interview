#include <stdio.h> //printf, scanf, ...
#include <string.h> //memcpy, strlen, ...
#include <unistd.h> //fork, write, sleep...
#include <stdlib.h> //malloc, free, exit...

#include "header.h"

int main(void)
{
	struct s_tank *tank = initTank();

	/*-------------------
	launch your test here
	--------------------*/
	tankPush(tank, 10);
	tankPush(tank, 50);
	tankPush(tank, 900);
	tankPush(tank, 950);
	int i = 0;
	while (i < tank->n)
	{
		printf("stack: %d\n", tank->stacks[i]->sum);
		i++;
	}
	printf("\npop: %d\n", tankPop(tank));

	i = 0;
	while (i < tank->n)
	{
		struct s_elem *tmp = tank->stacks[i]->elem;
		while (tmp)
		{
			printf("elem: %d\n", tmp->energy);
			tmp = tmp->next;
		}
		i++;
	}
	printf("\npop: %d\n", tankPop(tank));
	printf("pop: %d\n", tankPop(tank));
	printf("pop: %d\n", tankPop(tank));
	printf("pop: %d\n", tankPop(tank));

	tankPush(tank, 900);
	printf("\npop: %d\n", tankPop(tank));
	return (0);
}



// Function used for the test
// Don't go further :)
