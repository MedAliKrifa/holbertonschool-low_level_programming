#include "search_algos.h"
/**
 * print - function to print array
 * @x: pointer to an array
 * @f: first element
 * @l: last element
 * Return: void
 */
void print(int *x, size_t f, size_t l)
{
	size_t i = 0;

	printf("Searching in array: ");

	for (i = f; i <= l; i++)
	{
		if (i != l)
		{
			printf("%d, ", x[i]);
		}
		else
			printf("%d\n", x[i]);
	}
}

/**
 * binary_search - function to search for int in an array
 * @array: array of int
 * @size: size of array
 * @value: values inside the array
 * Return: value of i or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t first = 0, mid = 0, last = size - 1;

	if (array == NULL)
		return (-1);

	while (first <= last)
	{
		print(array, first, last);

		mid = (first + last) / 2;

		if (array[mid] == value)
			return (mid);

		else if (array[mid] > value)

			last = mid - 1;

		else

			first = mid + 1;
	}
	return (-1);
}
