#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int *nums;

	nums = malloc(sizeof(int) * n);
	if (!nums)
	{
		printf("Error: malloc failed\n");
		exit(1);
	}

	va_start(valist, n);
	for (i = 0; i < n; i++)
		nums[i] = va_arg(valist, int);

	for (i = 0; i < n; i++)
	{
		printf("%d", nums[i]);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	free(nums);
	va_end(valist);
}
