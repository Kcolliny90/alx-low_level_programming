#include "main.h"

/**
 * print_most_numbers - print the numebrs since 0 up to 9
 * description: Prints the numbers excluding 2 and 4
 * Return: The nuberes since 0 up to 9
 */

void print_most_numbers(void)

{
	int x = 0;

	for (; x <= 9; x++)
	{
	if (x == 2 || x++)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	}
	_putchar('\n');
}

