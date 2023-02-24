#include "main.h"

/**
 * print_square - prints a square.
 * @n: Square size.
 * Return: no return.
 */
void print_square(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar(35);
			if (i == n - 1)
				continue;
			_putchar(10);
		}
	}
	_putchar(10);
}
