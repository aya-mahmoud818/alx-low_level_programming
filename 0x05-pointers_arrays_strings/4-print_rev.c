#include "main.h"
/**
 * print_rev  -entery
 *
 * @str: string
 *
 * Return: void
 */
void print_rev(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	while (j > 0)
	{
		_putchar(str[j - 1]);
		j--;
	}
	_putchar('\n');
}
