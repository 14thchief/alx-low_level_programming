#include "main.h"

/**
 * puts2 - prints one out of every 2 char
 * @str: string
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		_putchar(str[j]);
		j = j + 2;
	}
	_putchar('\n');
}
