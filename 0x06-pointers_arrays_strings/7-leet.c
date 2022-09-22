#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to convert
 *
 * Return: char *
 */
char *leet(char *s)
{
	int i, j;
	char c[] = "43071";
	char c1[] = "aeotl";
	char c2[] = "AEOTL";

	i = 0;
	while (s[i])
	{
		if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'o'
				|| s[i] == 'O' || s[i] == 't' || s[i] == 'T' || s[i] == 'l' || s[i] == 'L')
		{
			j = 0;
			while (c[j] != '\0' && s[i] != c1[j] && s[i] != c2[j])
				j++;
			s[i] = c[j];
		}
		i++;
	}
	return (s);
}
