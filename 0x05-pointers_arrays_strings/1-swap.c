#include "main.h"
/**
 * swap_int -entery
 *
 * @a: first num
 * @b: second num
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
