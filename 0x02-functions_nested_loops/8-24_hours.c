#include "main.h"

/**
 * jack_bauer - prints every minute of bauer's day
 * Return: void
 */

void jack_bauer(void)
{
	int hour1 = 0;
	int hour2 = 0;
	int min1 = 0;
	int min2 = 0;
	int doubleDig = 10;

	while (hour2 < 2)
	{
		if (hour2 == 2)
		{
			doubleDig = 3;
		}
		while (hour1 < doubleDig)
		{
			while (min2 < 6)
			{
				while (min1 < 10)
				{
					_putchar('0' + hour2);
					_putchar('0' + hour1);
					_putchar(':');
					_putchar('0' + min2);
					_putchar('0' + min1);
					_putchar('\n');
					min1++;
				}
				min2++;
			}
			hour1++;
		}
		hour2++;
	}
}
