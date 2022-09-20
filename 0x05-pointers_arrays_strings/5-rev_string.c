/**
 * rev_string - reverses string
 * @s: string to reverse
 * Return: nothing
 */
void rev_string(char *s)
{
	char *t = s;
	char n[10000];
	int i = 0;

	while (*s != '\0')
	{
		n[i] = *s;
		s++;
		i++;
	}
	i = 0;

	while (s > t)
	{
		s--;
		*s = n[i];
		i++;
	}
}
