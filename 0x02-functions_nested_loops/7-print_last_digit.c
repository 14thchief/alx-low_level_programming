#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @n: number
 * Return: number
 */

int print_last_digit(int n)
{
	int lastDigit = n < 0 ? -1 * (n % 10) : n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
