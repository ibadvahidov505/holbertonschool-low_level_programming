#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 14, ten times
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
				_putchar('1');

			c = b % 10;
			_putchar(c + '0');
		}
		_putchar('\n');
	}
}
