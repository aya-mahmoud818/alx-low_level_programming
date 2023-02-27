#include "main.h"
/**
 * puts_half -entery
 *
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	i = length / 2;
	if (length % 2)
	{
		i++;
	}
	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
