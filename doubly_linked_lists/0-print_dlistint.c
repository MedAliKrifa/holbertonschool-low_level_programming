#include "lists.h"
/**
 * print_dlistint - print all the elements of list
 * @h: pointer
 * Return: value of i
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
