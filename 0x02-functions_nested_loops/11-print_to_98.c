#include <stdio.h>

/**
 * print_to_98 - prints from n to 98
 * Return: ints from n to 98
 * @n: starting number
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf(n);
			n++;
		}
	}
	else if (n == 98)
	{
		printf(98);
	}
	else
	{
		while (n >= 98)
		{
			printf(n);
			n--;
		}
	}
}
