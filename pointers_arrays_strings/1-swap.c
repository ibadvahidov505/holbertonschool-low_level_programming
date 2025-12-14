#include <stdio.h>

/**
 * main - swaps two integers and prints them
 *
 * Return: 0 on success
 */
int main(void)
{
	int a = 5;
	int b = 10;
	int temp;

	temp = a;
	a = b;
	b = temp;

	printf("%d, %d\n", a, b);

	return (0);
}
