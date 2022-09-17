#include "main.h"

/**
 * more_numbers - prints 0 to 14 10X
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
			_putchar(j + 48);
		for (j = 0; j < 5; j++)
		{
			_putchar(49);
			_putchar(j + 48);
		}
		_putchar(10);
	}
}
