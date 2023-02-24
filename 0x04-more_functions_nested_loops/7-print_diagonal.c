#include "main.h"

/**
 * print_diagonal - prints '\' n times.
 * @n: times '\' is printed.
 * Return: no return.
 */
void print_diagonal(int n)
{
	int i;

	if (!(n <= 0))
	{
		for (i = 0; i < n; i++)
		{
			_putchar(92);
		}
	}
	_putchar(10);
}
