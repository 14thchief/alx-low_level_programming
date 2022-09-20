#include "main.h"
/**
 * rev_string - reverses string
 * @s: string to reverse
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;
	char str;

	while (s[i])
	{
		i++;
	}

	i--;

	while (i >= 0)
	{
		str += s[i];
		i--;
	}
	str += '\0';

	*s = str;
}
