#include "main.h"

/**
 * _strncpy - copy a string up to n
 * @dest: destination string
 * @src: source string
 * @n: number of charectors to copy
 *
 * Return: char *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
