#include "lists.h"
/**
 * sum_dlistint - to sum data of lists
 * @head: head of list pointer
 * Return: value ofresult
 */
int sum_dlistint(dlistint_t *head)
{
    int result = 0;

    while (head)
    {
        result = result + head->n;
        head = head->next;
    }
    return (result);
}
