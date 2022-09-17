#include "main.h"
#include <stdio.h>
/**
 * print_times_table - check the code.
 * @n: table size
 *
 * Return: void.
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (!(n < 0 || n > 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				printf("%5d", j * i);
				if (j < n)
					printf(",");
			}
			printf("\n");
		}
	}
}
