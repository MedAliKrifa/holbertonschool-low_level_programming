#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main to multiply two integers
 * @argc: integer
 * @argv: array of pointer
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i, n, result;

	i = 0;
	n = 0;
	if (argc == 3)
	{
		i = atoi(argv[1]);
		n = atoi(argv[2]);
		result = i * n;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
