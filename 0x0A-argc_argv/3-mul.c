#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result to multiplying two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 for error, 0 for success
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
