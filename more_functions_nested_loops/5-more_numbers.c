#include "main.h"
#include <stdio.h>

/**
 * more_numbers - more_numbers to print numbs 10 times
 * Return: 0.
 */
void more_numbers(void)
{
int x;
int i = 0;
while (i < 10)
{
for (x = 0; x <= 14; x++)
{
_putchar(x + '0');
}
i++;
}
_putchar('\n');
}
