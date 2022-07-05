#include "main.h"
/**
 * _realloc - _realloc to allocate an array
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: value of p
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		free(ptr);
	}
	return (p);
}
