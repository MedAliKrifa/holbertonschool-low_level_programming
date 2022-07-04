#include "variadic_functions.h"
/**
 * print_strings - print_strings to print string
 * @n: const int
 * @separator: value given to seperate numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list ap;
    unsigned int i;
    char *x;

    va_start(ap, n);
    for (i = 0; i < n; i++)
    {
        x = va_arg(ap, char *);
        if (x == NULL)
            printf("(nil)");
        else
            printf("%s", x);
        if (separator != NULL && i != n - 1)
            printf("%s", separator);
    }
    printf("\n");
    va_end(ap);
}
