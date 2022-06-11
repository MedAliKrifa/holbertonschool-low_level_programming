#include "main.h"
#include <stdio.h>

/**
 * print_line - print_line to print a line using _  and loop
 * Return: 0.
 */
void print_line(int n)
{
int i;
if (n != 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
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
