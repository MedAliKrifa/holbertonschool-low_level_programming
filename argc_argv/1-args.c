#include "main.h"
#include <stdio.h>
/**
 * main - main to print the arguments of the function
 * @argc: integer
 * @argv: array of pointer
 */
int main(int argc, char *argv[])
{
    (void)argv;
    printf("%d ", argc - 1);
    printf("\n");
    return (0);
}
