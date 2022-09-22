/**
 * reverse_array - reverses an array of integers
 * @a: an array of integers
 * @n: the number of elements to reverse
 */
void reverse_array(int *a, int n)
{
	int hold;
	int i = n - 1;
	int j = 0;

	while (j < i)
	{
		hold = a[j];
		a[j] = a[i];
		a[i] = hold;
		i--;
		j++;
	}
}
