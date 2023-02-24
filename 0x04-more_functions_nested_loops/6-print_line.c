#include "main.h"
/**
 * print_line - print (_ * n) and then append $
 * @n: number of times to print '_'
 * Return: 0 on completion
 */
void print_line(int n)
{
	int i;

	if (!(n <= 0))
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
		_putchar(36);
	}

	_putchar(10);
}
