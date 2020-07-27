#include "holberton.h"

/**
 * print_c - prints a character
 * @list: list of arguments
 */
int print_c(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
/** print_s - prints a string
 * @list: list of arguments
 */
int print_s(va_list list)
{
	char *s = va_arg(list, char *);
	int n;

	if (s == NULL)
	{
		s = "(null)";
	}
	for (n = 0; s[n] != '\0'; n++)
	{
		_putchar(s[n]);
	}
	return (n);
}
/** print_mod - prints the '%' character
 * @list: list of arguments
 */
int print_mod(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}
/**
 * print_d - prints a decimal
 * @list: list of arguments
 * Return:
 */
int print_d(va_list list)
{
	int number = va_arg(list, int);
	int m;
	int len = 1;
	int control = 1;

	m = number;
	if (number < 0)
	{
		_putchar('-');
		m = ((number) * -1);
		while (m > 9)
		{
			m /= 10;
			len++;
			control *= 10;
		}
		m = ((number) * -1);
		while (control != 0)
		{
			_putchar((m / control) + '0');
			m %= control;
			control /= 10;
		}
	}
	else
	{
		while (m != 0)
		{
			m /= 10;
			len++;
			control *= 10;
		}
		m = number;
		while (control != 0)
		{
			_putchar((m / control) + '0');
			m %= control;
			control /= 10;
		}
	}
	return (len);
}
