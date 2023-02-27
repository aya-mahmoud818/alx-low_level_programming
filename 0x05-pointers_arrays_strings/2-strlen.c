#include "main.h"
/**
 * _strlen -entery
 *
 * @s: string
 *
 * Return: int
 */
int _strlen(char *s)
{
	int j = 0, len = 0;

	while (s[j] != '\0')
	{
		len++;
		j++;
	}
	return (len);
}
