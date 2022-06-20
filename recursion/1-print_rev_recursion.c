#include "main.h"
/**
 * _print_rev_recursion - _print_rev_recursion to print string in reverse
 * Return: value of s.
 * @s: char
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
	_print_rev_recursion(s+1);
	_putchar(*s);
}
}
