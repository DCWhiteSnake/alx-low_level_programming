#include <stdio.h>

int main(void);

/**
 * main - print 0, 1, 2, ...9\n using only putchar
 * Return: 0, no room for error.
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i < 57)
		{
			putchar(i);
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar(i);
		}
	}
	putchar(10);
	return (0);
}
