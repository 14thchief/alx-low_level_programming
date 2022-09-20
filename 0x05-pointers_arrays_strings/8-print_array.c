#include <stdio.h>

/**
 * print_array - function to print
 * @a: array
 * @n: specified number
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
