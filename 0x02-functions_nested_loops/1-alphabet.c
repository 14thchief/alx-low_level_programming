#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: Always 0
 */
void print_alphabet(void)
{
	char character = 'a';
	
	char end = 'z';

	while(character <= end)
	{
		_putchar(character);
		character++;
	}
	_putchar('\n');
}
