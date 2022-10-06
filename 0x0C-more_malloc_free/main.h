#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

void positive_or_negative(int);
int largest_number(int, int, int);
int _isupper(int);
int _isdigit(int);
int mul(int, int);
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int);
int _isalpha(int);
int print_sign(int);
int _abs(int);
int add(int, int);
void times_table(void);
void print_numbers(void);
void print_most_numbers(void);
void print_line(int);
void more_numbers(void);
void print_diagonal(int);
void print_square(int size);
void more_numbers(void);
void print_triangle(int size);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *leet(char *);
char *cap_string(char *);
void print_number(int n);
char *rot13(char *);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
unsigned int _strspn(char *s, char *accept);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int wildcmp(char *s1, char *s2);
int is_palindrome(char *s);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);

#endif /* MAIN_H */
