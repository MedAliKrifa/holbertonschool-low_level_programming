#include "main.h"
/**
 * create_array - create_array to create an arrach of char
 * @size: size of array
 * @c: char
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	i = 0;
	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		*(arr + i) = c;
		i++;
	}
	return (arr);
}
