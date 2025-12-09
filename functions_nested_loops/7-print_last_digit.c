#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to process
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int son;

	son = n % 10;

	if (son < 0)
		son = -son;

	return (son);
}
