#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: head of list pointer
 * @index: index given unint
 * Return: 1 on success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *t = *head;

	if (*head == NULL)
		return (-1);

	while (index != 0)
	{
		if (t == NULL)
			return (-1);
		t = t->next;
		index--;
	}

	if (t == *head)
	{
		*head = t->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		t->prev->next = t->next;
		if (t->next != NULL)
			t->next->prev = t->prev;
	}
	free(t);
	return (1);
}
