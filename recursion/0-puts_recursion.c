#include "main.h"
/**
 * _puts_recursion - _puts_recursion to print string followed by new line
 * Return: value of s.
 * @s: char
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
	_putchar('\n');
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
