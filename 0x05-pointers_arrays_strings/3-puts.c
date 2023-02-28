#include "main.h"
/**
 * _puts - prints a string followed by a newline
 * @str: [char *] Pointer to an integer.
 * Return: nothing.
 */
void _puts(char *str)
{
	int n;
	char c;

	for (n = 0, c = *(str + n); c != '\0'; n++,
		     c = *(str + n))
		_putchar(c);
	_putchar(10);
}
