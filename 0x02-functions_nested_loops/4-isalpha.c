#include "main.h"

/**
 * _isalpha - check lower case
 * @c: check if is lower
 *
 * Description: 'the program's description'
 *
 * Return: 1 (success) and 0 (failed)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
