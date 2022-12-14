#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: char pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k;
	char *str;

	i = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
		j++;
	i += j;
	str = malloc(sizeof(char) * i + 1);
	if (str != NULL)
	{
		k = 0;
		while (*s1)
			str[k++] = *s1++;
		while (*s2)
			str[k++] = *s2++;
		str[k] = '\0';
	}
	return (str);
}
