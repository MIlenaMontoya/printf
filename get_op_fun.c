#include "holberton.h"
/**
 * get_op_func - gets the function for the format
 *
 */
int (*get_op_func(char t))(va_list)
{
	func tipo[] =
	{
		{'c', print_c},
		{'s', print_s},
		{'%', print_mod},
		{'\0', NULL}
	};
	int n = 0;
	while (tipo[n].fp)
	{
		if (tipo[n].fp == t)
		{
			return (tipo[n].function);
		}
		n++;
	}
	return (0);
}