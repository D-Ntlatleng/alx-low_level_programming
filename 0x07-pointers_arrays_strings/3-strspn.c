#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: string to scan
 * @accept: bytes to scan for
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j;
	int len;

	len = 0;
	while (accept[len])
		len++;
	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				break;
			j++;
		}
		if (j == len)
			return (i);
		i++;
	}
	return (0);
}
