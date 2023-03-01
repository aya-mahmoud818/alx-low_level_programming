#include "main.h"
/**
 * *_strncat -entery
 *
 * @dest: first string
 * @src: second string
 * @n: number
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}

	while (src[j] && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';
	return (dest);
}
