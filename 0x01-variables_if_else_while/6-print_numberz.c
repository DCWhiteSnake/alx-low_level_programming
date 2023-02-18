#include <stdio.h>

int main(void);

/**
 * main - print 0123456789\n using only putchar
 * Return: 0, no room for error.
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	putchar(10);
}
