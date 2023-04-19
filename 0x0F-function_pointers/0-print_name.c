#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - prompt nm using ptr to func
* @name: str to add
* @f: ptr to func
* Return: void
**/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
