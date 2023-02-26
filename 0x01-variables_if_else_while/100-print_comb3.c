#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all possible different combinations
 * Two digits must be different
 * The two digits must be different
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order, with two digits
 * Only use the putchar function
 * Only use putchar five times maximum in code
 * Return: 0
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + c);
				putchar('0' + d);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
