#include <stdio.h>
/**
 * main - prompt letters in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lr;

	for (lr = 'a'; lr <= 'z'; lr++)
	{
		putchar(lr);
	}
	putchar('\n');
	return (0);
}
