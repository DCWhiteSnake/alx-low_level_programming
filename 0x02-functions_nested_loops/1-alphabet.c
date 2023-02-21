#include "main.h"

/**
 * print_alphabet - prints the letters of the alphabet in lowercase.
 * Return: 0 since there little room for errors
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar(i);
	_putchar(10);
}
