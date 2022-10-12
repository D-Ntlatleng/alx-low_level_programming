#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdlib.h>
#include <unistd.h>

void print_name(char *name, void (*f)(char *));
void _putchar(char *str);

#endif
