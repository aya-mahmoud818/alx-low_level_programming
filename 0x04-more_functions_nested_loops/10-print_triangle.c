#include <stdio.h>
#include "main.h"
/**
 * print_triangle _entery
 *
 * @size: integer of size
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int row, column;

	for (row = size - 1; row >= 0; row--)
	{
		for (column = 0; column < size; column++)
		{
			if (column <= size)
			{
				printf("#");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
