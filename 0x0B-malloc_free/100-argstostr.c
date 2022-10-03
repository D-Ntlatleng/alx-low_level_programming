#include <stdlib.h>
/**
 * argstostr - argv[] to string
 * @ac: argc
 * @av: argv
 *
 * Return: char pointer or NULL
 */
char *argstostr(int ac, char **av)
{
	unsigned int i, j, k;
	char *str;

	if (ac > 0 && av != NULL)
	{
		i = 0;
		k = 0;
		while (av[i])
		{
			j = 0;
			while (av[i][j] != '\0')
				j++;
			k += j;
			i++;
		}
		str = malloc((k + ac) * sizeof(char) + 1);
		if (str)
		{
			i = 0;
			k = 0;
			while (av[i])
			{
				j = 0;
				while (av[i][j])
				{
					str[k++] = av[i][j++];
				}
				str[k++] = '\n';
				i++;
			}
			str[k + 1] = '\0';
			return (str);
		}

	}
	return (NULL);
}
