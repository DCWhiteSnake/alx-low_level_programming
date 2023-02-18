#include <stdio.h>

int main(void);

/**
 * main - prints all single digit members of base 10 starting from 0
 * Return: 0 if no error
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%i", n);
		if (n == 9)
			printf("\n");
	}
	return (0);
}
