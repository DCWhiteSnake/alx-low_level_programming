#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @n: Triangle size.
 * Return: no return.
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - (i + 1); j++)
				_putchar(32);
			for (k = j; k < size; k++)
				_putchar(35);
			if (i == size - 1)
				continue;
			_putchar(10);
		}
	}
	_putchar(10);
}
