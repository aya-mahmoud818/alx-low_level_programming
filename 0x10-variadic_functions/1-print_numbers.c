#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers -entery
 *
 * @separator: string
 * @n: int number
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(numbers);
}
