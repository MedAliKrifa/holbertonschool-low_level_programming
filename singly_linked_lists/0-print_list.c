#include "lists.h"
/**
 * sum_them_all - sum_them_all to sum all parameters
 * @n: const int
 * Return: sum of all parameters
 */
size_t print_list(const list_t *h)
{
    int i = 0;
    while (h != NULL)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
            printf("[%d] %s\n", h->len, h->str);

        h = h->next;
        i++;
    }
    return (i);
}