#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
int _putchar(char c);
size_t print_list(const list_t *h);
int _printf(const char *format, ...);
void write_number(int n);
int print_x(va_list x);
int print_X(va_list X);
int print_u(va_list u);
int print_o(va_list o);
int printstr(char *c);
int writenum(int n, int start);

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}  __attribute__((__packed__))
list_t;
#endif
