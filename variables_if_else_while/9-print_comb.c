#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - all possible combinitions of digits
 * Return: 0
 */
int main(void)
{
int x;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
}
putchar(' ,\n');
return (0);
}
