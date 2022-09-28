/**
 * _sqrt - returns the square root of a number
 * @a: number
 * @b: number
 * Return: square root
 */

int _sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
