#include "main.h"
/**
 * print_sign - print_sign if positive or negative or 0
 * Return: On success 1.
 * @c: integer
 */
int print_sign(int n)
{
if (n > 0)
{
printf("+");
return (1);
}
else if (n == 0)
{
printf("0");
return (0);
}
else
{
printf("-");
return (-1);
}
}
