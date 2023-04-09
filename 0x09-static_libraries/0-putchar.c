#include <unistd.h>
/**
* _putchar - char > std output
* @c: char to prompt
* Return: On success 1.
* On error, ret -1, and set errno.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
