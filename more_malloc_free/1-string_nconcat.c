#include "main.h"
/**
 * string_nconcat - string_nconcat to concatunate 2 strings
 * @s1: first char
 * @s2: second char
 * @n: int
 * Return: value of concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int length, length1, length2, i;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length1 = strlen(s1);
	length2 = strlen(s2);
	if (length2 > n)
		n = length2;
	length = length1 + n;
	concat = malloc(sizeof(char) * (length + 1));
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		if (i < length1)
			concat[i] = s1[i];
		else
			concat[i] = s2[i - length1];
	}
	concat[length] = '\0';
	return (concat);
}
