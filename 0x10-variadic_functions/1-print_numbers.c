#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Return nothing
 * @separator: const char string to be printed between numbers
 * @n: const unsigned integer (the number of integer passed to print_numbers
 * Desc: Write a function that prints numbers, followed by a new line.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if ((i != (n - 1)) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(nums);
}
