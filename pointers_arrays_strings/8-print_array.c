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
if (i == n)
{
printf("%d", a[i]);
}
else
{
printf("%d,", a[i]);
printf(" ");
}
}
}
