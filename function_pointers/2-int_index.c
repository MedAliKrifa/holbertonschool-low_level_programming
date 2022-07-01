#include "function_pointers.h"
/**
 * array_iterator - array_iterator to print an array using function pointer
 * @action: function
 * @array: array of functions
 * @size: size of array
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int x;

    if (array == NULL)
        return (-1);
    else if (cmp == NULL)
        return (-1);
    for (x = 0; x < size; x++)
    {
        if (cmp(array[x]) != 0)
            return (x);
    }
    return (-1);
}
