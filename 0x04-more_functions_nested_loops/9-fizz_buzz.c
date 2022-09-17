#include "main.h"

/**
 * main - prints 1 to 100, Fizz and Buzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int j;


	for (i = 1; i <= 100; i++)
	{
		j = 0;
		if (i % 3 == 0)
		{
			printf("Fizz");
			j++;
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
			j++;
		}
		if (!j)
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
