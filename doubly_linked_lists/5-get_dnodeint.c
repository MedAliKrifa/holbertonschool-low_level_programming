#include "lists.h"
/**
 * get_dnodeint_at_index - return numb of nodes
 * @index: unint
 * @head: head of list pointer
 * Return: value of head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    while (index != 0)
    {
        if (head == NULL)
            return (NULL);

        head = head->next;
        index--;
    }
    return (head);
}
