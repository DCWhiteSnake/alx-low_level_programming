#include "main.h"
/**
 * _strncat - copy at most n bytes from src to dest
 * @dest: [char *] Pointer to the destination string.
 * @src: [char *] Poointer to the source string.
 * @n: amount of bytes to copy
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int k;
	int d_len;
	int s_len;

	d_len = _strlen(dest);
	s_len = _strlen(src);
	i = 0;
	k = d_len;
	j = d_len + s_len;
	while (n < s_len && k < j)
		*(dest + k++) = *(src + i++);

	*(dest + k) = '\0';
	return (dest);
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
