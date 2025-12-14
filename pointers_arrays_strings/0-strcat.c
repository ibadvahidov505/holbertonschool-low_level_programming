#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int k = 0;

	while (dest[a] != '\0')
		a++;

	while (src[k] != '\0')
	{
		dest[a] = src[k];
		a++;
		k++;
	}

	dest[a] = '\0';

	return (dest);
}

