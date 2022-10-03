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
		res = res * 10 + s[i++] - 48;
	}
	if (neg % 2 != 0)
		res *= -1;
	return (res);
}
