#include <stdio.h>

/**
 * main - prints the letters of the alphabet in lowercase.
 * Return: 1 if no error is thrown
 */
int main(void)
{
	for (int i = 97; i < 123; i++)
		putchar(i);
	putchar(10);
	return (1);
}
