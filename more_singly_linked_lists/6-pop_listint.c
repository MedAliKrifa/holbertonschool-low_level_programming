#include "lists.h"
/**
 * pop_listint - pop_listint to delete a node from list
 * @head: head node
 */
int pop_listint(listint_t **head)
{
    listint_t *i;
    int res;

    if (*head == NULL)
        return (0);
    i = (*head)->next;
    res = (*head)->n;
    free(*head);
    *head = i;
    return (res);
}
