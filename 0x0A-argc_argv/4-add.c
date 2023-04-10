#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* check_num - check - str int
* @str: arr str
* Return: Al 0 (Success)
*/
int check_num(char *str)
{
	/* here i Declar my variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*The string count*/

	{
		if (!isdigit(str[count])) /*checks if str digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
* main - Prompt name of pgm
* @argc: Count args
* @argv: Args
* Return: Al 0 (Success)
*/
int main(int argc, char *argv[])

{

	/* here i Declar my variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /* here Goes through the arr*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*ATOI --> convert str to int*/
			sum += str_to_int;
		}

		/*Cond if one number contains sym != digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}
