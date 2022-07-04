#include "variadic_functions.h"
/**
 * print_char - print_char to print char
 * @ap: var list
 */
void print_char(va_list *ap)
{
	char c;

	c = va_arg(*ap, int);
	printf("%c", c);
}
/**
 * print_integer - print_integer to print integer
 * @ap: var list
 */
void print_integer(va_list *ap)
{
	int i;

	i = va_arg(*ap, int);
	printf("%d", i);
}
/**
 * print_float - print_float to print float
 * @ap: var list
 */
void print_float(va_list *ap)
{
	float f;

	f = va_arg(*ap, double);
	printf("%f", f);
}
/**
 * print_string - print_string to print string
 * @ap: var list
 */
void print_string(va_list *ap)
{
	char *s;

	s = va_arg(*ap, char *);

	if (s == NULL || *s == '\0')
		s = "(nil)";
	printf("%s", s);
}
/**
 * print_all - print_all to print all types
 * @format: format
 */
void print_all(const char *const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	unsigned int x = 0;
	char *sep = "";

	print_t p[] = {{"c", print_char},
				   {"i", print_integer},
				   {"f", print_float},
				   {"s", print_string},
				   {NULL, NULL}};

	while (format != NULL && format[i])
	{
		va_start(ap, format);
		while (x < 4 && format[i] != *(p[x].type))
			x++;
		if (x < 4)
		{
			printf("%s", sep);
			p[x].f(&ap);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
