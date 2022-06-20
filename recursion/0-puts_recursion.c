#include "main.h"
/**
 * _puts_recursion - _puts_recursion to print string followed by new line
 * Return: value of s.
 * @s: char
 */
void _puts_recursion(char *s)
{
    if (*s)
    {
        s = s + 1;
        _putchar(*s);
        _putchar('\n');
        
    }
}
