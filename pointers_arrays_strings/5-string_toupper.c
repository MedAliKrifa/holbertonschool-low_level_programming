#include "main.h"
/**
 * string_toupper - string_toupper to reverse strings from lowcase to uppercase
 * @s: pointer
 */
char *string_toupper(char *s)
{
int i;
while (s[i])
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
i++;
}
return (s);
}
