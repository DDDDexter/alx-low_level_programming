
#include <stdio.h>

/**
 * main - prompt combination of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int l, m;

	for (l = 48; l <= 56; l++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > l)
			{
				putchar(l);
				putchar(m);
				if (l != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
