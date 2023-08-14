#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_DIGITS 100

bool isNumber(const char *str);
char *multiplyStrings(const char *num1, const char *num2);
int main(int argc, char *argv[]);

/**
 * isNumber - Function to check if a string contains only digits
 * @str: string to be checked
 * Return: true if string has disgits only
*/
bool isNumber(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (false);
		}
		str++;
	}
	return (true);
}

/**
 * multiplyStrings - Function to multiply two numbers as strings
 * @num1: first number
 * @num2: second number
 * Return: result of multiplication
*/
char *multiplyStrings(const char *num1, const char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int resultSize = len1 + len2;
	int i, j, sum, product;
	char *result = calloc(resultSize + 1, sizeof(char));

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0');
			sum = product + result[i + j + 1];
			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}

	for (i = 0; i < resultSize; i++)
	{
		result[i] += '0';
	}

	return (result);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
*/
int main(int argc, char *argv[])
{
	char *num1 = argv[1];
	char *num2 = argv[2];
	char *result;

	if (argc != 3 || !isNumber(argv[1]) || !isNumber(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	result = multiplyStrings(num1, num2);
	printf("%s\n", result);

	free(result);

	return (0);
}
