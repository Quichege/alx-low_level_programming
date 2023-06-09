#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check digits within the string
 * @str: array str
 *
 * Return: 0 (success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;

	while (count < strlen(sstr))/**count string*/

	{
		if (!isdigit(str[count])) /*check if str has digits*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: Arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;

	while (count < argc)
	{
		if (check_num(aargv[count]))
		{
			str_to_int = atoi(argv[count]);
			su, += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		count++
	}

	printf("%d\n", sum);

	return (0);
}
