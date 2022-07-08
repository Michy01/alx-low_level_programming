#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Return nothing
 * @separator: This is the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Desc: Write a function that prints strings, followed by a new line.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int index;

	va_start(args, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
