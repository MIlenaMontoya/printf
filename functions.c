#include "holberton.h"

/**
 * print_c - prints a character
 * @lista: list of arguments
 */
int print_c(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
/** print_s - prints a string
 * @lista: list of arguments
 */
int print_s(va_list list)
{
	char *s = va_arg(list, char *);
	int n;

	for(n = 0; s[n] != '\0'; n++)
	{
		_putchar(s[n]);
	}
	return (n);
}
/** print_mod - prints the '%' character
 * @lista: list of arguments
 */
int print_mod(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}
