#include "main.h"
/**
 * *_strcat -entery
 *
 * @dest: first string
 * @src: second string
 *
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}

	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
