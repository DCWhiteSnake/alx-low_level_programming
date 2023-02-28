#include "main.h"
/**
 * print_rev - prints a string followed by a newline
 * @s: [char *] Pointer to a char.
 * Return: nothing.
 */
void print_rev(char *s)
{
	int n;
	int c;
	char x;

	c = 0;

	for (n = 0, x = *(s + n); x != '\0'; n++,
		     x = *(s + n))
		c++;

	for (n = c - 1; n >= 0; n--)
		_putchar(*(s + n));
}
