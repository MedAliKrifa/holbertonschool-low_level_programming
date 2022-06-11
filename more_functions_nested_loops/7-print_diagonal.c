#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print_diagonal to print a diagonal using \\ and loop
 * Return: 0.
 * @n : integer
 */
void print_diagonal(int n)
{
int i = 0;
int j;
if (n != 0)
{
while (i < n)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
i++;
}
}
else
{
_putchar('\n');
}
}
