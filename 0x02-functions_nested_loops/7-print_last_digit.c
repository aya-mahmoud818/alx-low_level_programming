#include "main.h"

/**
 * print_last_digit - checks for lowercase charachters
 *
 * @c: parameter to be checked
 *
 * Return: always 0
 */
int print_last_digit(int c)
	{
		int lastdigit;

		if (c < 0)
		{
			lastdigit =  (c % 10) * -1;
		}
		else
		{
			lastdigit =  c % 10;
		}

		_putchar(lastdigit + '0');
		return (lastdigit);
	}
