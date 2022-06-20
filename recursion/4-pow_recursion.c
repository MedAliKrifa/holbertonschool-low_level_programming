#include "main.h"
/**
 * _pow_recursion - _pow_recursion to print power of two integer
 * Return: value of n.
 * @x: integer
 * @y: integer
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (x = 1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
