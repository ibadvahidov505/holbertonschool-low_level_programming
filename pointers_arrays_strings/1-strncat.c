#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int k = 0;

	/* find end of dest */
	while (dest[a] != '\0')
		a++;

	/* append at most n chars from src */
	while (k < n && src[k] != '\0')
	{
		dest[a] = src[k];
		a++;
		k++;
	}

	dest[a] = '\0';

	return (dest);
}

