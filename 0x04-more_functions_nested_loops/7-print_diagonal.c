#include "main.h"

/**
 * print_diagonal - prints '\' n times.
 * @n: times '\' is printed.
 * Return: no return.
 */
void print_diagonal(int n)
{
	int i;
	int k;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (k = i; k >= 0; k--)
				_putchar(32);
			_putchar(92);
			if (i == n - 1)
				continue;
			_putchar(10);
		}
	}
	_putchar(10);
}
