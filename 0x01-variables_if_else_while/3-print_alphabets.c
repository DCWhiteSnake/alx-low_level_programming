#include <stdio.h>

/**
 * main - prints the letters of the alphabet in lowercase and then uppercase.
 * Return: 1 if no error is thrown
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	for (i = 65; i < 91; i++)
		putchar(i);
	putchar(10);
	return (0);
}
