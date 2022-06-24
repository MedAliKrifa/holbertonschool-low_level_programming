#include "main.h"
/**
 * create_array - create_array to create an arrach of char
 * @size: size of array
 * @c: char
 * Return: 0
 */
char *_strdup(char *str)
{
    unsigned int i, length;
    char *dupl;
    i = 0;
    length = strlen(str);
    if (str == NULL)
    {
        return (NULL);
    }
    dupl = malloc(sizeof(char) * (length));
    if (dupl == NULL)
    {
        return (NULL);
    }
    while (i < length)
    {
        dupl[i] = str[i];
        i++;
    }
    return (dupl);
}
