#include "lists.h"
/**
 * add_dnodeint - to add new node
 * @n: pointer
 * @head: head of list pointer to pointer
 * Return: value of i
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = *head;
	if (*head != NULL)
		(*head)->prev = node;
	*head = node;
	return (node);
}
