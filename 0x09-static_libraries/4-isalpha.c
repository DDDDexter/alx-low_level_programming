#include "main.h"

/**
* _isalpha - ? for alphabetic char
* @c: char > ?
* Return: 1 if char, ! = 0
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
