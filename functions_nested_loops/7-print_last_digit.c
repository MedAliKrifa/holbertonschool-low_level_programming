#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - print_last_digit
 * Return: On success 1.
 * @n: integer
 */
int print_last_digit(int n)
{
_putchar('0' + abs(n) % 10);
return (abs(n) % 10);
}
