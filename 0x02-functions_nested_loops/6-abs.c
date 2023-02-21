#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: The int.
 * Return: the abs value of the int
 */
int _abs(int n)
{
	int s;

	if (n >= 0)
		s = n;
	else
		s = -1 * n;
	return (s);
}
