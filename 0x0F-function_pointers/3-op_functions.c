#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - Ret sum of two nums
* @a: The fir num
* @b: The sec num
* Return: The sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - Ret >< of two num
* @a: The fir num
* @b: The sec num
* Return: The >< of a and b.
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - Ret the product of two nums
* @a: The fir num
* @b: The sec num
* Return: The product of a and b.
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - Ret the / of two num.
* @a: The fir num
* @b: The sec numb
* Return: The quotient of a and b.
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - Ret the % of the / of two nums
* @a: The firs num
* @b: The sec num
* Return: The % of the / of a by b.
*/
int op_mod(int a, int b)
{
	return (a % b);
}
