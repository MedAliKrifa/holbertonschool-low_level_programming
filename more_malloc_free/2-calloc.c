#include "main.h"
/**
 * _calloc - _calloc to allocate a memory for an array
 * @nmemb: int
 * @size: int
 * Return: value of array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *value;
	unsigned int i;
	array = malloc(size * nmemb);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (array == NULL)
		return (NULL);
	value = array;
	for (i = 0; i < nmemb * size; i++)
	{
		value[i] = '\0';
	}
	return (array);
}
