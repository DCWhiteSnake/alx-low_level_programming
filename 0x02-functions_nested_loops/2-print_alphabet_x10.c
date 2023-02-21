#include "main.h"

/**
 * print_alphabet_x10 - prints the letters of the alphabet in lowercase 10X.
 * Return: 0 since there little room for errors
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
			_putchar(j);
		_putchar(10);
	}
}
