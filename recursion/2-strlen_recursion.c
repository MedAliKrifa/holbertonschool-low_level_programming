#include "main.h"
/**
 * _strlen_recursion - _strlen_recursion to print length of string
 * Return: value of s.
 * @s: char
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
		return (1 + _strlen_recursion(s + 1));
}
}
