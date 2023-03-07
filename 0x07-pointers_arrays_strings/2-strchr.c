#include "main.h"

int _strlen(char *s);

/**
 * _strchr - Locates a character in a string.
 * @s: the string in contention.
 * @c: the character to locate.
 * Return: A pointer to the first occurence of the character in the @s
 */

char *_strchr(char *s, char c)
{
	#define NULL_POINTER ((void *)0)
	int n;
	int i;

	n = _strlen(s);

	for (i = 0; i < n; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}


	return (NULL_POINTER);
}

/**
 * _strlen - Calculates the length of a string
 * @s: the string in contention.
 * Return: the length of the string;
 */
int _strlen(char *s)
{
	int i;
	char c;

	c = 1;
	i = 0;
	while (c != 0)
	{
		c = *(s + i);
		i++;
	}
	return (i);
}
