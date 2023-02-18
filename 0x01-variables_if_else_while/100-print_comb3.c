#include <stdio.h>

int main(void);

#define MAX_SINGLE_INT 58
/**
 * main - print unique pairs of the decimal characters
 * 01, 02, 03, ...89\n using only putchar
 * Return: 0, no room for error.
 */
int main(void)
{
	int i;
	int j;
	int a;
	int b;
	int values_dict[MAX_SINGLE_INT][MAX_SINGLE_INT];

	for (a = 0; a < MAX_SINGLE_INT; a++)
		for (b = 0; b < MAX_SINGLE_INT; b++)
			values_dict[a][b] = 1;

	for (i = 48; i <= MAX_SINGLE_INT; i++)
	{
		for (j = 48; j <= MAX_SINGLE_INT; j++)
		{
			if (values_dict[i][j] && values_dict[j][i] == 1 &&
				i != j)
			{
				values_dict[i][j] += 1;
				putchar(i);
				putchar(j);

				if (i == 56 && j == 57)
					continue;
				putchar(44);
				putchar(32);
			}
			else
			{
				values_dict[i][j] += 1;
			}
		}
	}
	putchar(10);
	return (0);
}
