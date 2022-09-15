#include "main.h"

/**
 * times_table - prints times table
 * Return: void
 */

void times_table(void)
{
	int a = 0;
	int b = 0;
	int multi;

while (a <= 9)
{
	while (b <= 9)
	{
	multi = a * b;
		if (b == 0)
		{
			_putchar('0' + multi);
		}
		else if (multi <= 9)
		{
			_putchar(' ');
			_putchar('0' + multi);
		}
		else
		{
			_putchar('0' + multi / 10);
			_putchar('0' + multi % 10);
		}

		if (b < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		b++;
	}
	_putchar('\n');
	a++;
}
}
