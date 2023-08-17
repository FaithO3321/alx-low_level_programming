#include "3-calc.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result;
	int num1;
	int num2;
	char *operator;
	int (*operation)(int, int) = get_op_func(operator);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
