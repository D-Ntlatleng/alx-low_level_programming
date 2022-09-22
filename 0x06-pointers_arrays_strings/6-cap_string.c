#include "main.h"

/**
 * cap_string - capitilizes all words of the string
 * @s: string to capitilize
 *
 * Return: char *
 */

char *cap_string(char *s)
{
	int i;

	if (s[0] >= 97 && s[0] <= 122)
		s[0] -= 32;
	i = 0;
	while (s[i])
	{
		if ((s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
					|| s[i] == '"' || s[i] == '(' || s[i] == ')' ||
					s[i] == '{' || s[i] == '}' || s[i] == 32 || s[i] == 9
					|| s[i] == 10) && (s[i + 1] >= 97 && s[i + 1] <= 122))
		{
			s[i + 1] -= 32;
		}
		i++;
	}
	return (s);
}
