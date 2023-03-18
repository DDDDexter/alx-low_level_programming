#include <stdio.h>
/**
 * main - prompt letters in lower and uppercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int upp;

	for (upp = 'a'; upp <= 'z'; upp++)
		putchar(upp);
	for (upp = 'A'; upp <= 'Z'; upp++)
		putchar(upp);
	putchar('\n');
	return (0);
}
