#include "main.h"

/**
 * print_array - print n values from array of size m.
 * @a: the pointer to the array of ints.
 * @n: the number of elements to print.
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0, k = *(a + i); i < n; k = *(a + ++i))

	{
		printf("%i", k);
		if (i != n - 1)
		{
			printf("%c", 44);
			printf("%c", 32);
		}

	}
	printf("%c", 10);
}
