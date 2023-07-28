#include "main.h"
/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char leetArr[5][2] = {
		{'a', '4'},
		{'e', '3'},
		{'o', '3'},
		{'t', '7'},
		{'l', '1'},
	};

	for (; *ptr != '\0'; ptr++)
	{
		for (int i = 0; i < 5; i++)
		{
			if (*ptr == leetArr[i][0] || *ptr == leetArr[i][0] - ('a' - 'A'))
			{
				*ptr = leetArr[i][1];
				break;
			}
		}
	}
	return (str);
}
