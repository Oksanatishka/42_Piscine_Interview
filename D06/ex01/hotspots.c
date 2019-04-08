#include "header.h"

int selectHotspots(struct s_hotspot **hotspots)
{
	int count = 1;
	int change = 0;
	for (int i = 1; hotspots[i]; i++)
	{
		if (hotspots[i]->pos - hotspots[i]->radius >= hotspots[change]->pos + hotspots[change]->radius)
		{
			count++;
			change = i;
		}
		else if (hotspots[change]->radius > 0)
			change = i;
	}
	return count;
}
