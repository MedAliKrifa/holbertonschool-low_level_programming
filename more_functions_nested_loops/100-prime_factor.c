#include <stdio.h>
/**
 * main - main to count all prime factor of a number
 * Return: 0.
 * @num : integer
 */

int main(void)
{
int num;
int count;

for (count = 2; num > 1; count++)
{
while (num % count == 0)
{
printf("%d ", count);
num = num / count;
}
}
printf("\n");
return (0);
}
