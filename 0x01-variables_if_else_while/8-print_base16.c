#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 1 if no error is thrown
 */
int main(void)
{
	int i;

	for (i = 48; i < 123; i++)
	{
		if ((i >= 48 && i < 58) || (i >= 97 && i <= 102))
			putchar(i);
		else
			continue;
	}
	putchar(10);
	return (0);
}
