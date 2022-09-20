/*
 * swap_int - swaps the values of two integers
 * @*a: first integer
 * @*b: second integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int *aa = *a;
	int *bb = *b;

	*aa = b;
	*bb = a;
}
