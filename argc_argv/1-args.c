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
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
