#include <stdio.h>
/**
 * main - prompt letters in lower case
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		if (low != 'e' && low != 'q')
		{
			putchar(low);
		}
		low++;
	}
	putchar('\n');
	return (0);
}
