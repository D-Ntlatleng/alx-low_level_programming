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
	int n;

	n = 0;
	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar(a + 48);
			putchar(b + 48);
			if (n < 44)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
	}
	putchar('\n');
	return (0);
}
