#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int a, b, k;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			k = a * b;

			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (k < 10)
					_putchar(' ');
			}

			if (k >= 10)
				_putchar((k / 10) + '0');

			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
