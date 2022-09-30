#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: argument counter
 * @argv: argument array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}
