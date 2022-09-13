#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: void 
 */

void my_print(void)
{
        int i;
        char str[] = "abcdefghijklmnopqrstuvwxyz";

        i = 0;
        while (str[i])
                _putchar(str[i++]);
        _putchar(10);
}

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
		my_print();
}
