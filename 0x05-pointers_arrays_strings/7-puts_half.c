#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}

	if (i % 2 == 0)
	{
		int len = i / 2;

		while (len < i)
		{
			_putchar(str[len]);
			len++;
		}
	}
	else
	{
		int len = i-- / 2;

		while (len < i)
		{
			_putchar(str[len]);
			len++;
		}
	}
	_putchar('\n');
}
