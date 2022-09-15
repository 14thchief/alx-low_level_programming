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
		for (int i = 0; i < 10; i++)
		{
			_putchar(chr)
		}
		chr++
	}

	_putchar('\n')
}
