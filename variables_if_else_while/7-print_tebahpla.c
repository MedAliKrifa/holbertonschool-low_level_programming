#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print alphabet in lowercase reversed
 * Return: 0
 */
int main(void)
{
char x;
for (x = 'z'; x >= 'a'; x--)
{
putchar(x);
}
putchar('\n');
return (0);
}
