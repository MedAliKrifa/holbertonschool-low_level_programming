#include "main.h"
/**
 * set_bit - set_bit to set the value of a given bit
 * @n: int
 * @index: int
 * Return: t1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= ((1 << index));
	return (1);
}
