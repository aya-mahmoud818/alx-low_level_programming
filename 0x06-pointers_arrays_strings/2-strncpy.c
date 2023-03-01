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

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
