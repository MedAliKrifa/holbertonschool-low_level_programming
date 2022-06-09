#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - print_last_digit
 * Return: On success 1.
 * @n: integer
 */
int print_last_digit(int n)
{
int z = labs(n) % 10;
_putchar('0' + z);
return (z);
}
