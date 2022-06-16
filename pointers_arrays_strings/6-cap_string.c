#include "main.h"
/**
 * cap_string - cap_string to cap each word meeting with the condition in t.
 * Return: value of s.
 * @res: pointer
 */
char *cap_string(char *res)
{
char t[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\t', ' ', '\n'};
int i, j;
if (res[0] >= 'a' && res[0] <= 'z')
{
res[0] = res[0] - 32;
}
for (i = 1; res[i]; i++)
{
for (j = 0; j < 13; j++)
{
if (res[i] == t[j] && (res[i + 1] >= 'a' && res[i + 1] <= 'z'))
{
res[i + 1] = res[i + 1] - 32;
}
}
}
return (res);
}
