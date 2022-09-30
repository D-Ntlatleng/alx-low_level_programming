#include <stdio.h>
#include <stdlib.h>

/**
 * main - summation of positive numbers
 * @argc: arugment counter
 * @argv: argument vector
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum;

	if (argc > 0)
	{
		sum = 0;
		i = 1;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				if (!(argv[i][j] >= 48 && argv[i][j] <= 57))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum += atoi(argv[i++]);
		}
		printf("%i\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
