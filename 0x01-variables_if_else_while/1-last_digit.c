#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main -entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int b;

	b = n % 10;

	if (b > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, b);
	} else if (b == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, b);
	} else if (b < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, b);
	}
	return (0);
}
