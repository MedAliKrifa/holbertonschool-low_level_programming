#include "lists.h"
/**
 * free_list - free_list to free a list
 * @head: head node
 */
void free_listint(listint_t *head)
{
    listint_t *f;
    while (head != NULL)
    {
        f = head->next;
        free(head);
        head = f;
    }
}
