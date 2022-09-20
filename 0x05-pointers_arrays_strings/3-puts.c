include "main.h"
/**
 * _puts - maps through an array of chars (a string) and prints to stdout
 * @str: string to print
 * Return: string
 */
void _puts(char *str)
{
	int i = 0;
	
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar("\n");
}
