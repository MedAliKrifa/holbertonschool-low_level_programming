#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print alphabet in lowercase
 * Return: 0
 */
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
