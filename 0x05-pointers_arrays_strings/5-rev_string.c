/**
 * rev_string - reverses string
 * @s: string to reverse
 * Return: nothing
 */
void rev_string(char *s)
{
	char *t = s;
	char n[100000];
	int i = 0;

	while (*s[i])
	{
		n[i] = *s[i];
		i++;
	}
	c = 0;

	while (s > t)
	{
		s--;
		*s = n[i];
		c++;
	}
}
