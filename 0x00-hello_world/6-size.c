#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'output a statement using printf'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of a int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(li));
	printf("Size of a long long int: %u byte(s)\n", sizeof(lli));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
	write(2, "Anything\n", 8);
	return (0);
}
