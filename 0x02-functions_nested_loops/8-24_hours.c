#include "main.h"
/**
 * jack_bauer -entery
 *
 * description: prints every minute of the day
 *
 * Return: always void
 */
void jack_bauer(void)
	{
		int a, b, c, d;

		a = 0;
		while (a < 3)
		{
			b = 0;
			while (b <= 9)
			{
				if (a == 2 && b > 3)
				{
					break;
				}
				c = 0;
				while (c <= 5)
				{
					d = 0;
					while (d <= 9)
					{
						_putchar('0' + a);
						_putchar('0' + b);
						_putchar(':');
						_putchar('0' + c);
						_putchar('0' + d);
						_putchar('\n');
					}
				}
			}
		}
	}

