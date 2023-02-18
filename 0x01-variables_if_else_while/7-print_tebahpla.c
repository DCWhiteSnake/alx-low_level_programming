#include <stdio.h>

/**
 * main - prints the letters of the alphabet in lowercase and in reverse.
 * Return: 1 if no error is thrown
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar(10);
	return (0);
}
