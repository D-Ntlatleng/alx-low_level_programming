#include "main.h"

/**
 * _islower - check lower case
 * @c: check if is lower
 *
 * Description: 'the program's description'
 *
 * Return: 1 (success) and 0 (failed)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
