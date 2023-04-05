#include "main.h"
/**
* _strlen_recursion - Ret len of a str.
* @s: str to measur.
* Return:len of str.
*/
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
