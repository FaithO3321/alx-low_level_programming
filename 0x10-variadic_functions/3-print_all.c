#include "variadic_functions.h"
/**
 * print_all - Prints anything followed by a new line
 * @format: A string containing types of arguments passed
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int i = 0, j = 0;
	char *str;
	char c;
	float f;
	int num;

	va_start(valist, format);

	while (format && format[i])
		switch (format[i])
		{
			case 'c':
				c = va_arg(valist, int);
				printf("%c", c);
				break;
			case 'i':
				num = va_arg(valist, int);
				printf("%d", num);
				break;
			case 'f':
				f = va_arg(valist, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(valist, char *);
				if (!str)
					printf("(nil)");
				printf("%s", str);
				break;
			default:
				j++;
		}
	if (format[i + 1] != '\0')
		printf(", ");
	i++;

	printf("\n");
	va_end(valist);
}
