#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible cobinations of two two-digit numbers
 * Description: The numbers should range from 0 to 99
 * Return: 0
 */
int main(void)
{
	int p, q;

	for (p = 0; p <= 98; p++)
	{
		for (q = p + 1; q <= 99; p++)
		{
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
			putchar(' ');
			putchar((q / 10) + '0');
			putchr((q % 10) + '0');
			if (p == 98 q == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
