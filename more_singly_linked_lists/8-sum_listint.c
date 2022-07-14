#include "lists.h"
/**
 * sum_listint - sum_listint to print sum of 2 lists
 * @head: head node
 * Return: value of i
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	while (head)
	{
		i = i + head->n;
		head = head->next;
	}
	return (i);
}
