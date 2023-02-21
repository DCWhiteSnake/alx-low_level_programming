#include "main.h"
/**
 * main - print out the string _putchar to stdout
 * Return: 0,1,2 depending on the returned value from unistd/write function
 */
int main(void)
{
	int str_len;
	int str[9];
	int i;

	str_len = 9;
	str[0] = 95;
	str[1] = 112;
	str[2] = 117;
	str[3] = 116;
	str[4] = 99;
	str[5] = 104;
	str[6] = 97;
	str[7] = 114;
	str[8] = 10;
	for (i = 0; i < str_len; i++)
	{
		_putchar(str[i]);
	}

	return (0);
}
