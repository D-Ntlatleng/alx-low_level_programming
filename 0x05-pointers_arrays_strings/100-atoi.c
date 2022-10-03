/**
 * check - strcmp
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: int
 */
int check(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] - s2[j])
			return (s1[i] - s2[j]);
		i++;
		j++;
	}
	return (0);
}
/**
 * _atoi - funtion that return a number is a string
 * @s: string to convert to int
 *
 * Return: int
 */
int _atoi(char *s)
{
	int res;
	int i;
	int neg;

	res = i = neg = 0;
	while (s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
			neg++;
		i++;
	}
	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		if (i)
		{
			if (check((s + i - 1), "2147483647") == 0)
				return (2147483647);
			else if (check((s + i - 1), "-2147483648") == 0)
				return (-2147483648);
		}
		res = res * 10 + s[i++] - 48;
	}
	if (neg % 2 != 0)
		res *= -1;
	return (res);
}
