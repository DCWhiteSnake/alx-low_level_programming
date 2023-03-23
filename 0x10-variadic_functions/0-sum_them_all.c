#include "variadic_functions.h"

/**
 * sum_them_all - sums up a variable set of integers together
 * @n: the first integer
 *
 * Return: the sum of the integers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum;
	int h;
	int n_cpy;

	n_cpy = n;
	if (n == 0)
		return (0);
	sum = 0;
	va_start(args, n);
	for (h = 0; h < n_cpy; h++)
		sum += va_arg(args, int);
	return (sum);
}
