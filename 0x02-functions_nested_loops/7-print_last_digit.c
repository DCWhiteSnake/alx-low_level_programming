#include "main.h"
/**
 * print_last_digit - Calculate the last digit of a 32-bit integer
 * @n: The int.
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	int s;

	if (n >= 0)
		s = n;
	else
		s = -1 * n;

	if (s > 10)
		s %= 10;
	_putchar('0' + s);
	return (s);
}
