#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int j;
	char c;

	i = 0;
	while (s[i])
		i++;
	i--;
	j = 0;
	while (j <= i)
	{
		c = s[i];
		s[i--] = s[j];
		s[j++] = c;
	}
}
