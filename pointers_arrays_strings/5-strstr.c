#include "main.h"
/**
 * _strpbrk - _strpbrk to searche a string for any of a set of bytes.
 * Return: NULL.
 * @s: pointer
 * @accept: pointer
 */
char *_strstr(char *haystack, char *needle)

{
while (*haystack != '\0')
{
if ((*haystack == *needle))
{
return haystack;
}
haystack++;
}

return NULL;
}
