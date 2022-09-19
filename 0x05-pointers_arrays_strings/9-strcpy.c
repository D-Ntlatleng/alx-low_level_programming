#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination to copy to.
 * @src: string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
