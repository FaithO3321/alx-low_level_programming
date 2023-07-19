#include "main.h"
/**
 * main - Entry point
 * Description - Program that prints alphabet 10 times in lower case
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alphabet, num;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		for (num = '0'; num = '9'; num++)
		{
			_putchar(alphabet);
		}
	_putchar('\n');
	}
}
