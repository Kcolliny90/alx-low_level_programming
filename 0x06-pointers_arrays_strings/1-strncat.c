#include <stdio.h>
/**
 * strncat - concatinate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: point of entry
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n) /*entry point for input value*/
{
	int i;
	int j;

	i = 0;
	while (dest[1] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
