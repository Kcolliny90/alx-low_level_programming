#include "main.h"

/**
 * main - Prints the alphabet in lower case followe by new line
 * Return: void
 */

void print_alphabet(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
