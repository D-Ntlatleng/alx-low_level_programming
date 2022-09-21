#include "main.h"

/**
 * string_toupper - check the code
 * @s: pointer to char array
 *
 * Return: char *
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		i++;
	}
	return (s);
}
