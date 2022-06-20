#include "main.h"
/**
 * _memset - _memset to fill a memory with constant bytes
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