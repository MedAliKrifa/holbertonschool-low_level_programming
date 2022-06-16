#include "main.h"
/**
 * _strstr - _strstr to locates a substring.
 * Return: NULL.
 * @haystack: pointer
 * @needle: pointer
 */
char *_strstr(char *haystack, char *needle)

{
while (*haystack != '\0')
{
if ((*haystack == *needle))
{
return (haystack);
}
haystack++;
}

return (NULL);
while (*haystack && *needle)
{
if (*haystack != *needle)
{
return 0;
}

haystack++;
needle++;
}

return (needle);
}
