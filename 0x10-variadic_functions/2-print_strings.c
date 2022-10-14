#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings with a separator
 * @separator: charector to separate numbers
 * @n: number of strings to print
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *str;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char*);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if ((i < n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
}
