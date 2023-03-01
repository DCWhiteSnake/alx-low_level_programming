#include "main.h"

/**
 * puts2 - writes the characters of a string plus a newline
 * @c: The pointer to the start of the string
 *
 * Return: nothing
 */
void puts2(char *c)
{
	char c_c;
	int i;

	i = 0;
	c_c = 'a';
	while (c_c != '\0')
	{
		if (i % 2 == 0 || i == 0)
		{
			c_c = *(c + i);
			_putchar(c_c);
		}
		i++;
	}
	_putchar(10);
}
