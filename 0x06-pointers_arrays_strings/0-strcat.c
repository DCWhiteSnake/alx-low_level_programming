#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: the string to copy src to.
 * @src: the string to copy to dest.
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int len = _strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}

/**
 * _strlen - Calculate length of str.
 * @str: the string.
 * Return: the length
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}
