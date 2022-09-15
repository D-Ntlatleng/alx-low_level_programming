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
	int a[5] = {0, 0, -16, 0, 1};
	int i;

	for (i = 0; i < 5; i++)
	putchar(a[i] + 48);
	putchar(10);
	return (0);
}
