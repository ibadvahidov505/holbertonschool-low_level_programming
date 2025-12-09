#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 *
 * Description: Prints from 00:00 to 23:59 using _putchar
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	hour = 0;
	while (hour < 24)
	{
		minute = 0;
		while (minute < 60)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);
			_putchar('\n');
			minute++;
		}
		hour++;
	}
}
