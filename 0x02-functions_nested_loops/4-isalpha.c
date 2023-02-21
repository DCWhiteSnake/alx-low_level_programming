#include "main.h"
/**
 * _isalpha - Check whether c is uppercase according to the ascii standard
 * @c: Dec value of the ascii character c
 *
 * This function checks whether int c, which must be an integer is within the
 * range of the decimal values for uppercase alphabets in the ascii table
 * (see man ascii) )
 * Return: If c is uppercase 1.
 * 2 otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) ? 1 : 0);
}
