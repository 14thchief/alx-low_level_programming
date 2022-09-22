/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int destLength = 0;

	while (dest[destLength] != '\0')
	{
		destLength++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[destLength + i] = src[i];
	}

	return (dest);
}
