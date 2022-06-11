#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print_most_numbers to print numbs from 0 to 9
 * Return: 0.
 */
void print_line(int n)
{
int i;
if (n != 0)
{
for (i = 1; i < n; i++)
{
_putchar('-');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
