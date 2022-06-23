#include "main.h"
#include <stdio.h>
/**
 * main - main to print the arguments of the function
 * @argc: integer
 * @argv: array of pointer
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
