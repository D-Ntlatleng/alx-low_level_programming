#include "main.h"

/**
 * _memcpy - copy from src to dest n charector
 * @dest: copy into
 * @src: source to copy from
 * @n: number of charectors to copy
 *
 * Return: char pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
