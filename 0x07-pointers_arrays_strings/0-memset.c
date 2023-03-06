#include "main.h"

/**
 * _memset - fills a section of memory with a constant byte
 * @s: a pointer to the memory area
 * @b: the byte to fill with.
 * @n: number single byte memory areas to fill with @b
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
