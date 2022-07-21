#include "lists.h"
/**
 * free_dlistint - to free a list
 * @head: head of list pointer to pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
