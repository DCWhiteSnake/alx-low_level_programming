#include <stdio.h>

/**
 * main - prints the letters of the alphabet in lowercase omitting q and e
 * Return: 1 if no error is thrown
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 101 || i == 113)
			continue;
	        putchar(i);
	}
	putchar(10);
	return (0);
}
