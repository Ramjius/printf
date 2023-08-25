#include "main.h"

/**
 * get_size - Calculates size to cast the argument
 * @format: Formatted string to print the arguments
 * @i: List of args to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *i)
{
	int curr_index = *i + 1;
	int size = 0;

	if (format[curr_index] == 'l')
		size = S_LONG;
	else if (format[curr_index] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = curr_index - 1;
	else
		*i = curr_index;

	return (size);
}
