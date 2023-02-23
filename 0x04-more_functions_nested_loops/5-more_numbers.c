#include "main.h"

/**
 * more_numbers - prints numbers
 * Return: 0 since there little room for errors
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar('0' + 1);
				_putchar('0' + i - 10);
				continue;
			}
			_putchar('0' + i);
		}
		_putchar(10);
	}
}
