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
char a;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
}
for (a = 'a'; a <= 'f'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
