#include "main.h"
/**
 * _islower - Check whether c is lowercase according to the ascii standard
 * @c: Dec value of the ascii character c
 *
 * This function checks whether int c, which must be an integer is within the
 * range of the decimal values for lowercase alphabets in the ascii table
 * (see man ascii) )
 * Return: If c is lowercase 1.
 * 2 otherwise.
 */
int _islower(int c)
{
	return ((c > 60 && c <= 122) ? 1 : 0);
}
