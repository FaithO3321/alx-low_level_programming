#include "3-calc.h"

typedef struct
{
	char *symbol;
	int (*operation)(int, int);
} op_t;

/**
 * op_add - adds integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - find the difference between integers
 * @a: first integer
 * @b: second integer
 * Return: the difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - find the product of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two integers
 * @a: the first integer
 * @b: the second integer
 * Return: result of division of a by b
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - find the modulo
 * @a: the first integer
 * @b: the second integer
 * Return: remainder of divison of a by b
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n")
		exit(100);
	}
	return (a % b);
}

op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: is the operator passed as argument to the program
 * Return: pointer to the function that corresponds
 * to the operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	while (ops[i].symbol != NULL)
	{
		if (*(ops[i].symbol) == *s && *(s + 1) == '\0')
		{
			return (ops[i].operation);
		}
		i++;
	}
	return (NULL);
}
