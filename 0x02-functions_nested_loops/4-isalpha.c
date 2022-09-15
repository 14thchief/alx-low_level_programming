#include "main.h"

/**
 * _isalpha - checks for alphabet
 * Return: 1 or 0
 * @chr: charecter to check
 */

int _isalpha(int chr)
{
	return ((chr >= 97 && chr <= 122) || (chr >= 65 && chr <= 90));
}
