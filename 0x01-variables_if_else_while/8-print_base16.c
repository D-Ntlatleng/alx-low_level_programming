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
	int a;
	int b;

	b = 48;
	for (a = 0; a < 16; a++)
	{
		putchar(a + b);
		if (a > 8)
			b = 87;
	}
	putchar(10);
	return (0);
}
