#include "main.h"
/**
 * _strstr - _strstr to locates a substring.
 * Return: NULL.
 * @haystack: pointer
 * @needle: pointer
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i;
if (*needle == 0)
{
return (haystack);
}
while (*haystack)
{
i = 0;
if (haystack[i] == needle[i])
{
do
{
if (needle[i + 1] == '\0')
{
return (haystack);
}
i++;
} while (haystack[i] == needle[i]);
}
haystack++;
}
return ('\0');
}
