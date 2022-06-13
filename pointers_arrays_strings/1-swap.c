#include "main.h"
/**
 * swap_int - swap_int to swape the values of two int
 * Return: 0.
 * @a: integer
 * @b: integer
 */
void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
