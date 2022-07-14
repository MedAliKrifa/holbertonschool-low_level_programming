#include "lists.h"
/**
 * list_len - list_len to return number of nodes
 * @h: head node
 * Return: value of i
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *i;
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
    i->len = strlen(i->str);
    i->next = *head;
    *head = i;
    return (i);
}
