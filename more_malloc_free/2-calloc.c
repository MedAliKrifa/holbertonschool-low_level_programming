#include "main.h"
/**
 * string_nconcat - string_nconcat to concatunate 2 strings
 * @s1: first char
 * @s2: second char
 * @n: int
 * Return: value of concat
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *array = malloc(size * nmemb);
    char *value;
    unsigned int i;
    if (nmemb == 0 || size == 0)
        return (NULL);
    if (array == NULL)
        return (NULL);
    value = array;
    for (i = 0; i < nmemb * size; i++)
    {
        value[i] = '\0';
    }
    return (array);
}
