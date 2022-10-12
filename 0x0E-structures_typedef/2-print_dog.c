#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that print elements of dog struct
 * @d: struct of dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name)
			printf("Name: %s\n", (*d).name);
		else
			printf("(nil)\n");
		printf("Age: %f\n", (*d).age);
		if ((*d).owner)
			printf("Owner: %s\n", (*d).owner);
		else
			printf("(nil)\n");
	}
}
