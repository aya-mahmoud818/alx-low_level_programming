#include <stdio.h>
#include "main.h"
/**
 * print_diagonal -entery
 *
 * @n: number of printed lines
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int l, s;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (s = 0; s < l; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
