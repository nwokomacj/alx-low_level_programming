#include <stdio.h>

/**
 * main -  prints all possible combinations of two two-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 56; n++)
	{
		for (m = 49; m < 57; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
