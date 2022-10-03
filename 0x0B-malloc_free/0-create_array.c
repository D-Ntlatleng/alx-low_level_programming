#include <stdlib.h>

/**
 * create_array - function that create an array and initializes it
 * @size: memory size to allocate
 * @c: charector to populate with
 *
 * Return: char pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *myarray;
	unsigned int i;

	myarray = NULL;
	if (size)
	{
		myarray = malloc(sizeof(char) * size);
		if (myarray)
		{
			i = 0;
			while (i < size)
				myarray[i++] = c;
			myarray[i] = '\0';
		}
	}
	return (myarray);
}
