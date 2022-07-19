#include "main.h"
/**
 * binary_to_uint - binary_to_uint to convert from binary to uint
 * @b: pointer
 * Return: value of dec
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	unsigned int i = 1;
	int n;
	int lengt = 0;
	if (b == NULL)
		return (0);
	while (b[lengt] != '\0')
	{
		lengt++;
	}
	for (n = lengt - 1; n >= 0; n--)
	{
		if (!(b[n] == '0' || b[n] == '1'))
			return (0);

		if (b[n] == '1')
			dec = dec + i;
		i *= 2;
	}
	return dec;
}
