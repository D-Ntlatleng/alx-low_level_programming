#include "main.h"

/**
 * _memset - check the code
 * @s: string to fill
 * @b: charector to fill with
 * @n: number of charectors to copy
 *
 * Return: char pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
		s[i++] = b;
	return (s);
}
