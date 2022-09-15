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
			n != 98 ? printf("%i, ", n) : printf("%i\n", n);
			n++;
		}
	}
	else if (n == 98)
	{
		printf("%i\n", 98);
	}
	else
	{
		while (n >= 98)
		{
			n != 98 ? printf("%i, ", n) : printf("%i\n", n);
			n--;
		}
	}
}
