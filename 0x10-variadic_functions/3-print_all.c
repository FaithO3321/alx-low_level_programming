#include "variadic_functions.h"
/**
 * print_all - Prints anything followed by a new line
 * @format: A string containing types of arguments passed
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		if (i != 0 && (format[i - 1] == 'c' || format[i - 1] == 'i' ||
		format[i - 1] == 'f' || format[i - 1] == 's'))
			printf(", ");

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
