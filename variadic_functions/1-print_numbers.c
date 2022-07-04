#include "variadic_functions.h"
/**
 * print_numbers - print_numbers to print numbers given
 * @n: const int
 * @separtor: value given to seperate numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list ap;
    unsigned int i;
    int x;

    va_start(ap, n);
    for (i = 0; i < n; i++)
    {
        x = va_arg(ap, int);
        printf("%d", x);
        if (separator != NULL && i != n - 1)
            printf("%s", separator);
    }
    printf("\n");
    va_end(ap);
}
