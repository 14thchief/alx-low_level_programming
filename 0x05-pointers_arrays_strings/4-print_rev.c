#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to print
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
