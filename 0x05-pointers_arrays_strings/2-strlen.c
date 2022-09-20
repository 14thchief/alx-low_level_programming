/**
 * _strlen - returns length of string
 * @s: string to check length of
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	return (i);
}
