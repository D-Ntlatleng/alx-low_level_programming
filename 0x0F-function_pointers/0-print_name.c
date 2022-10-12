#include "function_pointers.h"
#include <string.h>

/**
 * print_name - call function to print name
 * @name: name to print
 * @f: call back function to print with
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && strcmp(name, ""))
	{
		f(name);
	}
}
