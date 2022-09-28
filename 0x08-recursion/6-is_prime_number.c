/**
 * test - check if number is prime
 * @n: number to check
 * @i: start point
 *
 * Return: 1 or 0
 */
int test(int n, int i)
{
	if (n <= 1 || i * i > n)
		return (0);
	else if (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		test(n, i + 1);
	}
	return (1);
}

/**
 * is_prime_number - check if number is prime
 * @n: number to check
 *
 * Return: 1 if true otherwise 0
 */
int is_prime_number(int n)
{
	return (test(n, 2));
}
