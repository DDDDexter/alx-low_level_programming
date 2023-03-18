#include <stdio.h>
/**
 * main - prompts possible combination of digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f;

	for (f = 48; f < 58; f++)
	{
		putchar(f);
		if (f != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
