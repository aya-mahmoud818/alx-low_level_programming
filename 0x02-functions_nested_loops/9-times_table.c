#include "main.h"
/**
 * times_table -entery
 *
 * description: prints the nine times table
 *
 * Return: always void
 */
void times_table(void)
	{
		int a, b;

		for (a = 0; a < 10; a++)
		{
			for (b = 0; b < 10; b++)
			{
				int c;

				c = a * b / 10;
				if (b != 0)
				{
				if (c == 0)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(c + '0');
				}
				}
				_putchar(a * b % 10 + '0');
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
				_putchar('\n');
		}
	}
