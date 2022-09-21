#include "main.h"

/**
 * _strcat - concantenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: char *
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
