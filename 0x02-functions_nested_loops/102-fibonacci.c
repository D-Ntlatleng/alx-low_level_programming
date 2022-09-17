#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long long i;
	long long j;
	int c;

	i = 1;
	j = 2;
	printf("%lld, %lld", i, j);
	for (c = 3; c < 27; c++)
	{
		i += j;
		j += i;
		printf(", %lld, %lld", i, j);
	}
	printf("\n");
}
