#include "main.h"

int in_str(char *a, char c);

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string to search.
 * @accept: the sequence to search for.
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept or
 * NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int curr;

	curr = 0;
	while ((*(s + curr) != 0) && (*(s + curr) != '\0'))
	{
		if (in_str(accept, *(s + curr)))
		{
			return (s + curr);
		}
		curr++;
	}
	return ((void *)0);
}


/**
 * in_str - Checks if a character exists in a string.
 * @a: the string in contention.
 * @c: the charater to test for.
 * Return: 0 if false,
 * 1 if true.
 */
int in_str(char *a, char c)
{
	int i;
	char chr;

	chr = *a;
	i = 0;

	while (chr != '\0')
	{
		chr = *(a + i++);
		if (chr == c)
			return (1);
	}
	return (0);
}
