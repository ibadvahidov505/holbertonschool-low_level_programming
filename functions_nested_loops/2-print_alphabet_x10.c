#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet(void)
{
	int c;
	char letter;

	c = 0;
	while (c < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		c++;
	}
}
