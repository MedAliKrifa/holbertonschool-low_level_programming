#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print_name to print a name using function pointer
 * @f: function
 * @name: char
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	else if (f == NULL)
		return;
	else
		f(name);
}
