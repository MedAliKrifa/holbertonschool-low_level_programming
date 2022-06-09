#include "main.h"
/**
 * _isalpha - _isalpha to show if character is lowcase or uppercase
 * Return: On success 1.
 * @c: integer
 */
int _isalpha(int c)
{
if (c < 97 && c < 65)
{
return (0);
}
else
{
return (1);
}
}
