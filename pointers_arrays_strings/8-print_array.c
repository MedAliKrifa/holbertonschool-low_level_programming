#include "main.h"
/**
 * print_array - print_array to print n element of an array
 * Return: 0.
 * @a: pointer
 * @n: integer
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{

if (i < n && i != 0)
{
putchar(',');
putchar(' ');
}
printf("%d", a[i]);
}
putchar('\n');
}
