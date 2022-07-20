#include "main.h"
/**
 * clear_bit - clear_bit to set the value of a given bit to 0
 * @n: int
 * @index: int
 * Return: t1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
