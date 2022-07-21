#include "lists.h"
/**
 * dlistint_len - get number of elemnts
 * @h: pointer
 * Return: value of i
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
