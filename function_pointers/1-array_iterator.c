#include "function_pointers.h"
/**
 * print_name - print_name to print a name using function pointer
 * @f: function
 * @name: char
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    unsigned int x;
    for (x = 0; x < size; x++)
        action(array[x]);
}
