#include "lists.h"
/**
 * add_nodeint_end - add_nodeint_end to add node at the end of list
 * @head: head node
 * @n: integer
 * Return: value of i
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = *head;
	listint_t *i;

	i = malloc(sizeof(listint_t));
	if (i == NULL)
	{
		return (NULL);
	}
	i->n = n;
	i->next = NULL;
	if (*head == NULL)
	{
		*head = i;
		return (i);
	}
	else
	{
		while (node->next != NULL)
			node = node->next;
		node->next = i;
	}
	return (i);
}
