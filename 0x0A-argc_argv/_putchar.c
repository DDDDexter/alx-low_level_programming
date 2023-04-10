#include <stdio.h>
#include "main.h"

/**
* _putchar - > char c > stdout
* @c:char to prompt
* Return: On succ 1.
* On error, -1 is retur errno set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
