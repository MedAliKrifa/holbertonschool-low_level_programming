#include "main.h"
/**
 * print_sign - print_sign if positive or negative or 0
 * Return: On success 1.
 * @n: integer
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
