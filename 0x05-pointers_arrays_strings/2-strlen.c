#include "main.h"
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
