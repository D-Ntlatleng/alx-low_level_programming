#include <stdlib.h>

/**
 * _strdup - duplicate a string
 * @str: string to duplicate
 *
 * Return: char pointer or NULL
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *my_str;

	if (*str)
	{
		i = 0;
		while (str[i])
			i++;
		my_str = malloc(sizeof(char) * i);
		if (my_str)
		{
			j = 0;
			while (str[j])
			{
				my_str[j] = str[j];
				j++;
			}
			my_str[j] = '\0';
			return (my_str);
		}

	}
	return (NULL);
}
