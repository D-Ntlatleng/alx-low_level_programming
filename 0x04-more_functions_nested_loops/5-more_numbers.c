#include "main.h"

void my_print(int n);
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
			my_print(j + 48);
		for (j = 0; j < 5; j++)
		{
			my_print(49);
			my_print(j + 48);
		}
		my_print(10);
	}
}
/**
 * my_print - calling _putchar
 *@n: integer
 *
 * Return: void
 */
void my_print(int n)
{
	_putchar(n);
}
