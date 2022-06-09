#include "main.h"
/**
 * print_sign - print_sign if positive or negative or 0
 * Return: On success 1.
 * @n: integer
 */
int _abs(int n)
{
if (n < 0)
{
n = (-1) * n;
_putchar(n + '0');
}
else
{
_putchar(n + '0');
}
return (0);
}
