#include "main.h"

/**
 * _strpbrk - locates th first occurrence in the string
 * @s: string to scan
 * @accept: bytes to match
 *
 * Return: char pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (accept[i] == *s)
				return (s);
			i++;
		}
		s++;
	}
	return (NULL);
}
