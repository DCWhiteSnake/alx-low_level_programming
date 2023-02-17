#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
/**
 * main - prints out the last digit from a randomly generated integer
 * Return: 0 if successful
 */
int main(void)
{
	int n;
	int last_d;
	char *str_n = malloc(sizeof(char) * 10);
	char *ex_c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	sprintf(str_n, "%d", (int)fabs((double)n));
	last_d = atoi(&str_n[strlen(str_n) - 1]);
	if (last_d == 0)
	{
		ex_c = "and is 0";
	}
	else if (last_d > 5)
	{
		ex_c = "and is greater than 5";
	}
	else
	{
		ex_c = "and is less than 6 and not 0";
	}
	printf("The last digit of %i is %i %s\n", n, last_d, ex_c);
	free(str_n);
	return (0);
}
