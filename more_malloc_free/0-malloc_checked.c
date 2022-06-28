#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - malloc_checked to allocate a memory
 * @b: integer
 * Return: value of ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)

		exit(98);

	return (ptr);
}
