#include "main.h"
/**
 * factorial - factorial to print factorial of numb n
 * Return: value of n.
 * @n: integer
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
