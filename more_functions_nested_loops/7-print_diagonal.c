#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print_diagonal to print a diagonal using \\ and loop
 * Return: 0.
 * @n : integer
 */
void print_diagonal(int n)
{
int i;
if (n != 0)
{
for (i = 0; i < n; i++)
{
_putchar('\\');
}
_putchar('\n');
}
else if (n == 0)
{
_putchar('\n');
}
else
{
_putchar('\n');
}
}
