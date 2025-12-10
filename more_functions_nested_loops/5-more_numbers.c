#include "main.h"

/**
 * print_most_numbers - Prints numbers in a nested loop example
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = 0; b < 15; b++)
		{
			_putchar(b + '0');
		}
	}
	_putchar('\n');
}
