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
		if (c < 0)
		{
			return ((c % 10) * -1);
		}
		else
		{
			return (c % 10);
		}
	}
