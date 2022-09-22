/**
 * cap_string - capitalize every string
 * @s: string
 * Return: string
 */

char *cap_string(char *s)
{
	int i;
	int j;
	char delimeters[] = "\t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] -= 32;
			for (j = 0; delimeters[j] != '\0'; j++)
			{
				if (s[i] == delimeters[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	return (s);
}