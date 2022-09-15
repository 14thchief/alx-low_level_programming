#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return:void
 */
void print_alphabet_x10(void)
{
	char chr = 'a';
	char end = 'z';

	while (chr <= end)
	{
		int i = 0;
		while (i < 10)
		{
			_putchar(chr);
			i++;
		}
		chr++;
	}

	_putchar('\n');
}
