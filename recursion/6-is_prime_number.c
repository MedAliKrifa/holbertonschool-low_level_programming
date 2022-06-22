#include "main.h"
int check_prime(int n, int x);
/**
 * check_prime - check_prime to check if prime or not
 * Return: value of n.
 * @n: integer
 * @x: integer
 */
int check_prime(int n, int x)
{
{
	if (x == n / 2)
	{
		return (1);
	}
	if ((n % x) == 0)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, x + 1));
	}
}
}

/**
 * is_prime_number - is_prime_number to print 1 if n is prime numb and 0 if not
 * Return: value of n.
 * @n: integer
 */
int is_prime_number(int n)
{
if (n < 0)

return (0);

else if (n == 1 || n == 0)
{
	return (0);
}
else
{
return (check_prime(n, 2));
}
}
