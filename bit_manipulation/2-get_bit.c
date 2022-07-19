#include "main.h"
/**
 * get_bit - get_bit to convert from binary to uint
 * @n: int
 * @index: int
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
