#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int len;
	char *str;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	len = snprintf(NULL, 0, "%i", n);
	str = malloc(len + 1);
	snprintf(str, len + 1, "%i", n);
	if (str[len - 1] > 53)
		printf("Last digit of %i is %c and is greater than 5\n", n, str[len - 1]);
	else if (str[len - 1] < 54 && str[len - 1] != 48)
	{
		printf("Last digit of %i is %c ", n, str[len - 1]);
		printf("and is less than 6 and not 0\n");
	}
	else
		printf("Last digit of %i is 0 and is 0\n", n);
	free(str);
	return (0);
}
