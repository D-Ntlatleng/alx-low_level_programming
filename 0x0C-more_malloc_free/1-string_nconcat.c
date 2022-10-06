#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes to copy of s2
 *
 * Return: char pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str = NULL;
	unsigned int i, j;

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
	if (j > n)
		j = n;
	str = malloc((i + j) * sizeof(char) + 1);
	if (str)
	{
		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];
		for (j = 0; s2[j] != '\0' && j < n; j++)
			str[i + j] = s2[j];
		str[i + j] = '\0';
	}
	return (str);
}
