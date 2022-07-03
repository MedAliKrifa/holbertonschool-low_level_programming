#include "variadic_functions.h"
/**
 * sum_them_all - sum_them_all to sum all parameters
 * @n: const int
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int x = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		x += va_arg(ap, int);
	}
	va_end(ap);
	return (x);
}
