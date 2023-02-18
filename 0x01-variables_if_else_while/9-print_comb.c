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
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
