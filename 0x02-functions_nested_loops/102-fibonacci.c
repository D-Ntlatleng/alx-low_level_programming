#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	long i;
	long j;
	int c;

	i = 1;
	j = 2;
	printf("%ld, %ld", i, j);
	for (c = 3; c < 27; c++)
	{
		i += j;
		j += i;
		printf(", %ld, %ld", i, j);
	}
	printf("\n");
	return (0);
}
