#include "lists.h"
/**
 * listint_len - listint_len to print number of elemnts of a list
 * @h: head node
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
