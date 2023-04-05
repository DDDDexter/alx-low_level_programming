#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
* is_palindrome - check str palm
* @s: string to reverse
* Return: 1 if it is, 0 it's not
*/
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
* _strlen_recursion - ret str len
* @s: calc str len
* Return: str len
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
* check_pal - check char recur for palindrome
* @s: str check
* @i: iter
* @len: str len
* Return: 1 if palindrome, 0 if not
*/
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
