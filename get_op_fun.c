#include "holberton.h"
/**
 * get_op_func - gets the function for the format
 *
 */
int (*get_op_func(char t))(va_list)
{
	func f_type[] =
	{
		{'c', print_c},
		{'s', print_s},
		{'%', print_mod},
		{'d', print_d},
		{'\0', NULL}
	};
	int n = 0;
	while (f_type[n].fp)
	{
		if (f_type[n].fp == t)
		{
			return (f_type[n].function);
		}
		n++;
	}
	return (0);
}
