/**
 * test - check is a number has natural sqrt
 * @n: number to check
 * @i: start point
 *
 * Return: int or -1 if no natural sqrt
 */
int test(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (test(n, i + 1));
}
/**
 * _sqrt_recursion - find natural sqrt root of a number
 * @n: number to find sqrt of
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (test(n, 1));
}
