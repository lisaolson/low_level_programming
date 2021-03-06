#include "3-calc.h"

/**
 * main - Entry point
 * @argc: number of items in argv
 * @argv: array of strings
 * Return: result of operator functions; int
*/
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = func(num1, num2);
	printf("%d\n", result);
	return (0);
}
