#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main to add two integers
 * @argc: integer
 * @argv: array of pointer
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i, sum;
	sum = 0;
	if (argc > 0)
	{
		for (i = 1; argv[i] != NULL; ++i)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
