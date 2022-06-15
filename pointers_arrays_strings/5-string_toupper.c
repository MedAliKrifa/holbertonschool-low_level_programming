#include "main.h"
/**
 * reverse_array - reverse_array to reverse elements of an array
 * @a: pointer
 * @n: integer
 */
char *string_toupper(char *s)
{
int i;
while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
i++;
}
return (s);
}
