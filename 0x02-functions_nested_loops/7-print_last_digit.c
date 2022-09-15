#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @n: number
 * Return: number
 */

int print_last_digit(int n)
{
	int lastDigit = n < 10? n : n % 10;

	return (lastDigit);
}
