#include "lists.h"
/**
 * list_len - list_len to return number of nodes
 * @h: head node
 * Return: value of i
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{

		h = h->next;
		i++;
	}
	return (i);
}
