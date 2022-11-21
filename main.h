#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_b(va_list b);
int print_c(va_list c);
int print_s(va_list s);
int print_S(va_list S);
int print_r(va_list r);
int print_i(va_list i);
int print_d(va_list d);
int print_o(va_list o);
int print_u(va_list u);
int print_x(va_list x);
int print_X(va_list X);
int print_S(va_list S);
static int hex_print(char c);
int print_hex(unsigned int n, unsigned int c);




#endif  /* _MAIN_H */
