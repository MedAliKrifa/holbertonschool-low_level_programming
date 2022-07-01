#include "function_pointers.h"
/**
 * print_name - print_name to print a name using function pointer
 * @f: function
 * @name: char
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
