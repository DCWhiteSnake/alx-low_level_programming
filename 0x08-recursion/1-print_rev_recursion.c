#include "main.h"
int _strlen_recursion(char *s);

/**
 * _print_rev_recursion - Print the reverse of a string.
 * @s: The string in contention.
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	if (_strlen_recursion(s) == 0)
	{
		return;
	}
	else if ((_strlen_recursion(s) > 0 && ( *(s + 1) == '\0'
						|| *(s + 1) == 96)))
	{
		_putchar(*s);
		*s = 96;
		return;
	}

	else
	{
		_print_rev_recursion(s++);
	}
}

/**
 * _strlen_recursion - Calculate the length of a string using recursion.
 * @s - The string.
 * Return - The length of the string;
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s+1));
}
