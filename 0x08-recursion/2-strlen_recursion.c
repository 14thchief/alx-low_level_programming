/**
 * _strlen_recursion - gets length of string
 * @s: string
 * Return: integer length of string
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}

	return (n);
}
