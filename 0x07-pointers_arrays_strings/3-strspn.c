#include "main.h"

int in_str(char *a, char c);

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: the string in contention.
 * @accept: the charater/s to search for in the prefix.
 * Return: the number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	char sub_string[46];
	char temp;
	int i;
	int j;
	int count;

	i = 0;
	temp = *s;
	while (temp != 32 && temp != '\0')
	{
		sub_string[i] = temp;
		i++;
		temp = *(s + i);
	}
	sub_string[i] = '\0';

	j = 0;
	count = 0;
	for (j = 0; j < i; j++)
	{
		if (in_str(accept, *(sub_string + j)))
		{
			count++;
		}
	}

	return (count);
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
