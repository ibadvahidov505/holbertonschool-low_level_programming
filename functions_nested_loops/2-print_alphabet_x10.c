#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int c;
	char letter;

	for (c = 0; c < 10; c++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
