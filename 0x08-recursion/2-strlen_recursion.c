#include "main.h"

/**
 * _strlen_recursion - strlen in recursion
 * @s: string to find the length of
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
