/**
 * rev_string - reverses string
 * @s: string to reverse
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;
	char str;

	while (s[i])
	{
		i++;
	}

	i--;

	while (i >= 0)
	{
		str += s[i];
		i--;
	}
	
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
}
