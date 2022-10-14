#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers with a separator
 * @separator: charector to separate numbers
 * @n: number of numbers to print
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if ((i < n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
}
