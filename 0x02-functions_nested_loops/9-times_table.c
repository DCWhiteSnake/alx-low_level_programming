#include "main.h"
/**
 * times_table - print the time table up to 9.
 * Return: notxing
 */
void times_table(void)
{
	int x, y, x_y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			x_y = x * y;
			if (x_y >= 10)
			{
				_putchar((x_y / 10) + '0');
				_putchar((x_y % 10) + '0');
			}
			else
			{
				_putchar(x_y + '0');
			}
			if (y != 9)
			{
				_putchar(44);
				_putchar(9);
			}
			else
			{
				_putchar(36);
			}
		}
		_putchar(10);
	}
}
