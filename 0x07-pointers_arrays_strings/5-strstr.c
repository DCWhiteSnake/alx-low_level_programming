#include "main.h"


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
	int hay_counter;

	hay_counter = 0;
	needle_len = _strlen(needle);

	while (*haystack != '\0')
	{
		hay_counter = 0;
		temp_hay = *(haystack + hay_counter);
		while (temp_hay == *(needle + hay_counter) && temp_hay != '\0')
		{
			hay_counter++;
			temp_hay = *(haystack + hay_counter);
		}

		if (hay_counter == needle_len)
			return (haystack);
		haystack++;
	}

	return ((void *)0);
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
