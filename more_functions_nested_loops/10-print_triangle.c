#include "main.h"

/**
 * print_square - prints a right-aligned triangle of size `size`
 * @size: height of the triangle
 *
 * Return: void
 */
void print_square(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size - a - 1; b++)
		{
			_putchar(' ');
		}

		for (c = 0; c < a + 1; c++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
