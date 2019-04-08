#include "header.h"

double probabilityWin(double initDollars, double wantedDollars, int nbGame)
{
	if (nbGame < 0 || initDollars == 0)
		return 0;
	if (initDollars >= wantedDollars)
		return 1;
	else
		return (18 * probabilityWin(2 *initDollars, wantedDollars, nbGame - 1) + probabilityWin(initDollars / 2, wantedDollars, nbGame - 1))/37;
}
