#include "holberton.h"

/**
 * _printf - prints the format string
 * @format: the string to be printed
 * Return: number of printed characters
 */

int _printf(const char *format, ...)
{
	int (*get_f)(va_list);
	int n;
	int count;
	va_list list;

	va_start(list, format);
	count = 0;
	if (format == NULL)
	{
		return (-1);
	}
	for (n = 0; format[n] != '\0'; n++)
	{
		if (format[n] == '%')
		{
			while (format[n + 1] == ' ' || format[n + 1] == '\t')
			{
				n++;
			}
			if (format[n + 1] == '\0')
			{
				return(-1);
			}
			else
			{
				get_f = get_op_func(format[n + 1]);
				if(get_f != '\0')
				{
					count += get_f(list);
					n++;
				}
				else
				{
					_putchar('%');
					count += 1;
				}
			}
		}
		else
		{
			_putchar(format[n]);
			count++;
		}
	}
	va_end(list);
	return (count);
}
