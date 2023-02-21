#include "main.h"
/**
 * print_sign - prints the sign of an integer.
 * @n: The int.
 * Return: If n is positive 1.
 * 0 if neutral.
 * -1 if negative.
 */
int print_sign(int n)
{
	int s;

	if (n > 0)
	{
		s = 1;
		_putchar(43);
	}
	else if (n < 0)
	{
		s = -1;
		_putchar(45);
	}
	else
	{
		s = 0;
		_putchar(48);
	}
	return (s);
}
