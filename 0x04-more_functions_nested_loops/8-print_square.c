#include <stdio.h>
#include "main.h"
/**
 * print_square -entery
 *
 * @size: integer for square size
 *
 * Return: 0
 */
void print_square(int size)
{
	int l, i;

	if (s > 0)
	{
		for (l = 1; l <= size; l++)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar(35);
			}
				_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
