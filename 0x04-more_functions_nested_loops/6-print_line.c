#include <stdio.h>
#include "main.h"
/**
 * print_line -entery
 *
 * @n: number of dashes
 *
 * Return: always 0
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar(95);
		n--;
	}
		_putchar('\n');
}
