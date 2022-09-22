#include <string.h>
/**
 * _strcmp - compares two strings for a match in ASCII value
 * @s1: first string
 * @s2: second string
 * Return: difference between string values
 */
int _strcmp(char *s1, char *s2)
{
	int diff;
	int i = 0;

	while ((s1[i] != '\0' || s2[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	diff = (s1[i] - s2[i]) == 0? 0 : (s1[i] - s2[i]);

	return (diff);
}
