#include "variadic_functions.h"
/**
 * sum_them_all - function that sum all parameters
 * @n: number of parameters
 *
 * Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ptr;

	if (n)
	{
		sum = 0;
		va_start(ptr, n);
		for (i = 0; i < n; i++)
			sum += va_arg(ptr, int);
		va_end(ptr);
		return (sum);
	}
	return (0);
}
