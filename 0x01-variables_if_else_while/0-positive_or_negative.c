#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - calculates the polarity of a randomly generated number
 * Return: 0, if no error
 */
int main(void)
{
	int n;
	char *polarity;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		polarity = "is zero";
	}
	polarity = (n > 0) ? "is positive" : "is negative";
	printf("%i %s\n", n, polarity);
	return (0);
}
