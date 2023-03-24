#include "variadic_functions.h"

/**
 * print_all - print all types to the console.
 * @format: the list of formats
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int f_c;
	char t;

	va_start(ap, format);

	t = *format;
	f_c = 0;
	while (t != '\0')
	{
		switch (t)
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%i", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			printf("%s", va_arg(ap, char *));
			break;
		default:
			break;
		}
		if (*(format + f_c + 1) == '\0')
			printf("\n");
		if (*(format + f_c + 1) != '\0' &&
		    (t == 'c' || t == 'i' || t == 'f' || t == 's'))
			printf(", ");

		t = *(format + ++f_c);
	}
	va_end(ap);
}
