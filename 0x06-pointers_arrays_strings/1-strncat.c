/**
 * _strncat - concatenates two strings with delimiter
 * @dest: first string
 * @src: second string
 * @n: bytes delimiter for second string
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destLength = 0;

	while (dest[destLength] != '\0')
	{
		destLength++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[destLength + i] = src[i];
	}

	return (dest);
}
