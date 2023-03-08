#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the terminating null
 * byte (\0), to the buffer pointed to by dest.
 * @dest: the destination
 * @src: the source.
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char temp;
	int i;

	i = 0;
	temp = 'a';

	while (temp != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
        *(dest + (i + 1)) = '\0';

	return (dest);
}
