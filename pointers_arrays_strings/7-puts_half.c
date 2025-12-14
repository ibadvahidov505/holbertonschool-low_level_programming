#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int k;

	/* String-in uzunluğunu tapırıq */
	while (str[length] != '\0')
		length++;

	/* Başlanğıc indeksi tapırıq */
	if (length % 2 == 0)
		k = length / 2;
	else
		k = (length + 1) / 2;

	/* İkinci yarını çap edirik */
	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k++;
	}

	_putchar('\n');
}
