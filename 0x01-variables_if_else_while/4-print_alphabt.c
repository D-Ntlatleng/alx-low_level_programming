#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		if (n == 101 || n == 113)
			continue;
		putchar(n);
	}
	putchar('\n');
	return (0);
}
