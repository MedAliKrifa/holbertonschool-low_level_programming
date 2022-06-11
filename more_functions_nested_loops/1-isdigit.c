#include <ctype.h>
#include <stdio.h>
/**
 * _isdigit - _isdigit to check if digit or not
 * Return: On success 1.
 * @c: integer
 */
int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
