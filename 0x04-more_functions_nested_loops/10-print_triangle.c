#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @n: Triangle size.
 * Return: no return.
 */
void print_triangle(int n)
{
	int i;
	int j;
	int k;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n - (i + 1); j++)
				_putchar(32);
			for (k = j; k < n; k++)
				_putchar(35);
			if (i == n - 1)
				continue;
			_putchar(10);
		}
	}
	_putchar(10);
}
