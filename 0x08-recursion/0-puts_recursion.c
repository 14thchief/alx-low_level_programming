#include "main.h"
/**
 * _puts_recursion - recursively p[rints a char to standard output
 * @s: string to print
 * Return: void
 */

void _puts_recursion(char *s)
{
	int n = 0;

	if (s[n] == '\0')
	{
		return;
	}

	_putchar(s[n]);
	n ++;
	_puts_recursion(s);
}
