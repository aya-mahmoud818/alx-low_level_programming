include "main.h"
/**
 * *_memcpy -entery
 *
 * @dest: string
 * @src: string
 * @n: number
 *
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
