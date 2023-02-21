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
	int k;
	int a;
	int b;
	int c;
	int values_dict[MAX_SINGLE_INT][MAX_SINGLE_INT][MAX_SINGLE_INT];

	for (a = 0; a < MAX_SINGLE_INT; a++)
		for (b = 0; b < MAX_SINGLE_INT; b++)
			for(c = 0; c < MAX_SINGLE_INT; c++)
				values_dict[a][b][c] = 1;

	for (i = 48; i <= MAX_SINGLE_INT; i++)
	{
		for (j = 48; j <= MAX_SINGLE_INT; j++)
		{
			for (k = 48; k <= MAX_SINGLE_INT; k++)
			{
				if (values_dict[i][j][k] &&
				values_dict[j][i][k] == 1 &&
				i != j && j != k && i != k)
				{
					values_dict[i][j][k] += 1;
					putchar(i);
					putchar(j);
					putchar(k);

					if (i == 55 && j == 56 && k == 57)
						continue;
					putchar(44);
					putchar(32);
				}
				else
				{
					values_dict[i][j][k] += 1;
				}
			}
		}
	}
	putchar(10);
	return (0);
}
