#include "main.h"
/**
 * _isdigit - Check whether c is a digit according to the ascii standard
 * @c: Dec value of the ascii character c
 *
 * This function checks whether int c, which must be an integer is within the
 * range of the decimal values for integers[0-9] in the ascii table
 * (see man ascii) )
 * Return: If c is a digit 1.
 * 2 otherwise.
 */
int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
