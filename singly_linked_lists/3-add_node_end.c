#include "lists.h"
/**
 * add_node - add_node to add node to the list
 * @head: head node
 * @str: char
 * Return: value of i
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *i;
    list_t *end;

    if (str == NULL)
    {
        return (NULL);
    }
    i = malloc(sizeof(list_t));
    if (i == NULL)
    {
        return (NULL);
    }
    i->str = strdup(str);
    if (i->str == NULL)
    {
        free(i);
        return (NULL);
    }
    i->len = strlen(i->str);
    i->next = NULL;
    if (*head == NULL)
    {
        *head = i;
        return (i);
    }
    end = *head;
    while (end->next)
    {
        end = end->next;
        end->next = i;
    }

    return (i);
}
