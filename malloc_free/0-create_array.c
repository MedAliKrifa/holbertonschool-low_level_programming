#include "main.h"
/**
 * create_array - create_array to create an arrach of char
 * @size: size of array
 * @c: char
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
    char *arr;
    unsigned int i;
    arr = (char *)malloc(size * sizeof(char));
    if (size == 0)
    {
        return (NULL);
    }
    if (arr == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < size; i++)
    {
        *(arr + i) = c;
    }
    return (0);
}
