#include <stdio.h>

/**
 * main - entry point to the FizzBuzz program.
 *
 * Summary:  that prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead of the number and for the
 * multiples of five print Buzz. For numbers which are multiples of both three
 * and five print FizzBuzz.
 * Return: 0 always.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%s", "Fizz");
		if (i % 5 == 0)
			printf("%s", "Buzz");
		if ((i % 3 != 0) && (i % 5 != 0))
			printf("%d", i);
		if (i % 100 == 0)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
