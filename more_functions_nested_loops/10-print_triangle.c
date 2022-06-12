#include "main.h"
#include <stdio.h>

/**
 * print_triangle - print_triangle to print a triangle using #
 * Return: 0.
 * @n : integer
 */
void print_triangle(int size)
{
int i = 0;
int j;
int x;
if (size > 0)
{
while (i < size)
{
for (j = 0; j < i; j++)
{
for (x = 0; x < j; x++)
{
printf(" ");
}
printf("#");
}
printf("#");
printf("\n");
i++;
}
}
else
{
_putchar('\n');
}
}
