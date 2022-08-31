#include "search_algos.h"
/**
 * linear_search - function to search for int in an array
 * @array: array of int
 * @size: size of array
 * @value: values inside the array
 * Return : value of i or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
