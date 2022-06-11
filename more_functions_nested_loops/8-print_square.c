#include "main.h"
#include <stdio.h>

/**
 * print_square - print_square to print a square using # and loop
 * Return: 0.
 * @n : integer
 */
void print_square(int size)
{
int i = 1;
int j;
if (size > 0)
{
while (i < size)
{
for (j = 1; j < size; j++)
{
_putchar('#');
}
_putchar('#');
_putchar('\n');
i++;
}
}
else
{
_putchar('\n');
}
}
