#include <stdio.h>
#include "main.h"
/**
 * print_array -entery
 *
 * @a: string
 * @n: number
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 2)
		{
			printf(", ");
		}
	}
	printf('\n');
}
