#include "lists.h"
/**
 * add_nodeint - add_nodeint to add node at the beginning
 * @head: head node
 * @n: integer
 * Return: value of i
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i;

	i = malloc(sizeof(listint_t));
	if (i == NULL)
	{
		return (NULL);
	}
	i->n = n;
	i->next = *head;
	*head = i;
	return (i);
}
