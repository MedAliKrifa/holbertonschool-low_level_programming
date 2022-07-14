#include "lists.h"
/**
 * listint_len - listint_len to print number of elemnts of a list
 * @h: head node
 * Return: value of i
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
