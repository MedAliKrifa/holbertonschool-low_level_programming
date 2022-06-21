#include "main.h"
int _sqrt(int n, int x);
/**
 * _sqrt - _sqrt to incrument the n
 * Return: value of n.
 * @n: integer to find sqrt
 * @x: sqrt
 */
int _sqrt(int n, int x)
{
if (x ==  (n / 2))
{
	return (-1);
}
else if (n == (x * x))
{
	return (x);
}
else
	return (_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - _sqrt_recursion to print sqrt of a number
 * Return: value of n.
 * @n: integer
 */
int _sqrt_recursion(int n)
{
	int x;

	x = 1;
	if (n < 0)
	return (-1);
	return (_sqrt(n, x));
}
