#include "main.h"
/**
 * reverse_array -entery
 *
 * @a: array of integers
 * @n: number
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp;

	int left = 0;
	int right = n - 1;

	while (right > left)
	{
		temp = a[left];
		a[left] = a[right];
		a[right] = temp;
		left++;
		right--;
	}
}
