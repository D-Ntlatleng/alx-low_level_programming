#include "main.h"
/**
 * _strchr - function that locates a charector in a string
 * @s: string  to search
 * @c: charector to locate
 *
 * Return: NULL or pointer to first occurrence
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
