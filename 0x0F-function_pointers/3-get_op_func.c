#include "3-calc.h"
#include <stdlib.h>
/**
* get_op_func - Selec the corr func to perform
* the oper asked by the user
* @s: The oper passed as arg
* Return: A ptr to the func corresponding
*to the oper given as a param
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int z = 0;

	while (ops[z].op != NULL && *(ops[z].op) != *s)
		z++;

	return (ops[z].f);
}
