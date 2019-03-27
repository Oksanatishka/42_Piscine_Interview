#include "header.h"
#include <stdlib.h>

char *NthLastCity(struct s_city *city, int n)
{
	static int	i = 0;
	static char	*res = NULL;

	if (!city)
	{
		i = 0;
		res = NULL;
	}
	else 
	{
		NthLastCity(city->next, n);
		if (i == n) 
			res = city->name;
		i++;
	}
	return (res);
}


