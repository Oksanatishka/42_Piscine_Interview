#include "header.h"

double probaDistance(int dist, int *locations, int n)
{
	double total = 0;
	double occured = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			total++;
			if (locations[i] - locations[j] > dist)
				occured++;
			if (locations[j] - locations[i] > dist)
				occured++;
		}
	}
	return occured / total;
}
