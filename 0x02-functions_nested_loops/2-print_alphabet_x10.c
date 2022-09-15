#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return:void
 */
void print_alphabet_x10(void)
{
	char chr = 'a';
	char end = 'z';
	int i = 0;

	while (i < 10)
	{
		while (chr <= end)
		{
			_putchar(chr);
			chr++;
		}
		_putchar('\n');
		i++;
	}
}
