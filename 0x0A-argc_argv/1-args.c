#include <stdio.h>
/**
 * main - print number of arguments
 * @argc: argument number
 * @argv: argument array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc)
	{
		while (argv[i])
			i++;
	}
	printf("%d\n", i - 1);
	return (0);
}
