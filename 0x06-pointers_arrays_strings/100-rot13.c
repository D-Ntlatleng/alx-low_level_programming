#include "main.h"

/**
 * rot13 - rotate alphabets by 13
 * @s: string to rotate
 *
 * Return: char *
 */
char *rot13(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if ((s[i] >= 65 && s[i] <= 77) || (s[i] >= 97 && s[i] <= 109))
			s[i] += 13;
		else if ((s[i] >= 78 && s[i] <= 90) || (s[i] >= 110 && s[i] <= 122))
			s[i] -= 13;
		i++;
	}
	return (s);
}
