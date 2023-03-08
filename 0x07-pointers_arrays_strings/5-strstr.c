#include "main.h"

int in_str(char *a, char c);
int _strlen(char *s);


/**
 * _strstr - locates a substring.
 * @haystack: where to search for the substring.
 * @needle: the substring;
 * Return: a pointer to the beginning of the substring and
 * null if the substring doesn't exist
 */
char *_strstr(char *haystack, char *needle)
{
	int needle_len;
	char temp_hay;
	int i;
	int hay_counter;

	hay_counter = 0;
	needle_len = _strlen(needle);

	temp_hay = *haystack;
	while (temp_hay != 0 && temp_hay != '\0')
	{
		if (*needle == temp_hay)
		{
			break;
		}
		temp_hay = *(haystack + ++hay_counter);
	}

	if (_strlen((haystack + hay_counter)) < needle_len)
	{
		return ((void *)0);
	}

	for (i = 0; i < needle_len; i++)
	{
		if (*(needle + i) == *(haystack + i + hay_counter))
		{
			continue;
		}
		else
		{
			return ((void *)0);
		}
	}
	return ((haystack + hay_counter));
}

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
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
