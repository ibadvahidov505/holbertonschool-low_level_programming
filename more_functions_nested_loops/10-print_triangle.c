#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle
 * @size: height of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (a = 0; a < size; a++)
	{
		/* print spaces */
		for (b = 0; b < size - a - 1; b++)
		{
			_putchar(' ');
		}

		/* print hashes */
		for (c = 0; c < a + 1; c++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
