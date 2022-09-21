#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: number of charectors to copy
 *
 * Return: char *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}
