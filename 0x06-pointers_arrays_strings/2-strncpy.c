#include "main.h"
/**
 * *_strncpy -entery
 *
 * @dest: first string
 * @src: second string
 * @n: number
 *
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		if (src[i])
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
}
