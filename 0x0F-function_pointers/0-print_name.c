#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: the name to print
 * @f: a pointer to a function that does the printing;
 * Return: nothing;
 */
void print_name(char *name, void (*f) (char *))
{
	f(name);
}
