#include <stdio.h>
/**
 * main - Entry point
 * Ddescrption: 'Prints the lowercase alphabet in reverse'
 * Return: Alwasys 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
