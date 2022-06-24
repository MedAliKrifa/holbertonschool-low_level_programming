#include "main.h"
/**
 * str_concat - str_concat to concatunate two strings
 * @s1: char
 * @s2: char
 * Return: value of a
 */
char *str_concat(char *s1, char *s2)
{
	int a1, a2, s, i = 0;
	char *a;

	a1 = strlen(s1);
	a2 = strlen(s2);
	s = a1 + a2 + 1;
	a = malloc(s);

	if (a == NULL)
	{
		return (NULL);
	}
	while (*s1 != '\0')
	{
		a[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		a[i] = *s2;
		s2++;
		i++;
	}

	a[i] = '\0';
	return (a);
}
