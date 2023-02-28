#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: [char *] Pointer to a char.
 * Return: nothing.
 */
void rev_string(char *s)
{
	int n;
	int i;
	int middle;
	int len;
	char *c1;
	char *c2;

	len = _strlen(s);
	middle = len / 2;

	for (i = 0, n = len - 1; n > middle; n--, i++)
	{
		c1 = (s + i);
		c2 = (s + n);
		swap_char(c1, c2);

	}
}

/**
 * swap_char - swap chars
 * @c1: char 1
 * @c2: char 2
 * Return: nothing.
 */
void swap_char(char *c1, char *c2)
{
	char temp;

	temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}

/**
 * _strlen - returns the length of a string of chars.
 * @s: [int *] Pointer to a char.
 * Return: The count of concurrent chars ie., the count of
 * of characters from &s till we encounter a \0
 */
int _strlen(char *s)
{
	int x;
	int count;

	x = *s;
	count = 0;
	while (x != 0)
	{
		count += 1;
		x = *(s + count);
	}
	return (count);
}
