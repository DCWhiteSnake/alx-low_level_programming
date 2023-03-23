#include "variadic_functions.h"

/**
 * print_strings - print strings to the console.
 * @separator: the character that seperates integers
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *temp;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		temp = va_arg(args, char*);
		temp = (*temp == '\0')? "(nil)" : temp;
		if (i < n - 1)
		{
			if (*temp != '\0')
				printf("%s%s", temp, separator);
		}
		else
			printf("%s\n", temp);
		i++;
	}
	va_end(args);
}
