#include "holberton.h"
/**
 * get_op_func - gets the function for the format
 * @t: format symbol
 * Return: returns the format specific function
 */
int (*get_op_func(char t))(va_list)
{
	func f_type[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_mod},
		{'d', print_d},
		{'i', print_d},
		{'\0', NULL}
	};
	int n;

	for (n = 0; f_type[n].fp != '\0'; n++)
	{
		if (f_type[n].fp == t)
		{
			return (f_type[n].function);
		}
	}
	return (0);
}
