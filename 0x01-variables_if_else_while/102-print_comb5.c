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
	int c;
	int d;
	int n;
	int count;

	d = 1;
	n = 0;
	count = 1;
	for (a = 0; a < 10; a++)
	{
		for (b = 0 ; b < 9; b++)
		{
			for (c = 0 ; c < 10; c++)
			{
				for (d = d; d < 10; d++)
				{
					putchar(a + 48);
					putchar(b + 48);
					putchar(32);
					putchar(c + 48);
					putchar(d + 48);
					if (n < 8144)
					{
						putchar(',');
						putchar(32);
					}
					n++;

				}
				d = 0;
			}
			if (c > 9)
			{
				count++;
				d = count;
			}
		}
	}
	putchar('\n');
	return (0);
}