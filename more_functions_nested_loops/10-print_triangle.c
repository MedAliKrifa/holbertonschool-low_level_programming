#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print_diagonal to print a diagonal using \\ and loop
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
