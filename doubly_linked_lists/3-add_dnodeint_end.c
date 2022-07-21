#include "lists.h"
/**
 * add_dnodeint_end - to add new node at the end
 * @n: pointer
 * @head: head of list pointer to pointer
 * Return: value of i
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *end;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	end = *head;
	while (end->next)
		end = end->next;
	node->prev = end;
	end->next = node;

	return (node);
}
