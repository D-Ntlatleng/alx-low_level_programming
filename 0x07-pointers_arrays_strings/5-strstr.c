#include "main.h"

/**
 * _strstr - find first occurrence of the substring
 * @haystack: string to scan
 * @needle: string to find
 *
 * Return: point to beginning of the substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	j = 0;
	while (needle[j])
		j++;
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			i = 0;
			while (*(needle + i) == *(haystack + i) && *(needle + i) != '\0')
				i++;
			if (i == j)
				return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
