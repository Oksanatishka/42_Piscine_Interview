#include "header.h"
#include <stdlib.h>
#include <string.h>

char *rightShift(char *bin, int k)
{
	int i = 0;
	if (k < 6)
		for (i = 5; i - k >= 0; i--)
			bin[i] = bin[i-k];
	for (i = 0; i < k && i < 6; i++)
		bin[i] = '1';
	return bin;

}

char *leftShift(char *bin, int k)
{
	int i = 0;
	// 000011 << 2 doesn't work, output: 001000 (8), should be 001100 (12)
	// should be i + k not i + i
	for (i = 0; i + i < 6; i++)	
		bin[i] = bin[i + k];
	for (i = 5; i >= 0 && k > 0; i--,k--)
		bin[i] = '0';
	return bin;
}

int toInt(char *bits)
{
	// if bits[0] == 1 -> the decimal result will be with minus sign
	int result = 0;
	int shift = 1;
	int neg = (bits[0] == '1') ? 1 : 0;

	for (int i = 5;i >= 1; i--)
	{
		result = result + shift * ((bits[i] == '1') ^ neg);
		shift = shift << 1;
	}
	return (neg) ? -result -1 : result;
}
