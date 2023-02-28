#include "main.h"
/**
 * swap_int - update the value that a pointer points to
 * @a: [int *] Pointer to an integer.
 * @b: [int *] Pointer to another integer.
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
