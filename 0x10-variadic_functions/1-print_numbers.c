#include "variadic_functions.h"

void _putchar_number_helper(int n);
/**
 * print_numbers - print numbers to the console.
 * @separator: the character that seperates integers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int n_copy, i, j, temp;

	i = 0;
	j = 0;

	va_start(args, n);
	n_copy = n;
	while (i < n_copy)
	{
		temp = va_arg(args, int);
		if (temp < 0)
		{
			_putchar('-');
			temp *= -1;
		}
		_putchar_number_helper(temp);
		if (i < n_copy - 1)
		{
			if (*separator == '\0')
				continue;
			while (*(separator + j) != '\0')
			{
				_putchar(*(separator + j));
				j++;
			}
			j = 0;
		}
		else
		{
			_putchar(10);
		}
		i++;
	}
}

/**
 * _putchar_number_helper - print a number to the console using _putchar
 * @n: the number.
 * Return: nothing.
 */
void _putchar_number_helper(int n)
{
	if (n / 10)
	{
		_putchar_number_helper(n / 10);
	}
	_putchar('0' + n % 10);
}
