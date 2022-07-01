#include "function_pointers.h"
/**
 * array_iterator - array_iterator to print an array using function pointer
 * @action: function
 * @array: array of functions
 * @size: size of array
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	for (x = 0; x < size; x++)
		action(array[x]);
}
