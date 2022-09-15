#include "main.h"

/**
 * _islower - entry point
 * Return: 1 if lowercase and 0 if not
 * @chr - ASCII of character
 */

int _islower(int chr)
{
	int r = (chr >= 97 && chr <= 122);
	
	return (r);
}
