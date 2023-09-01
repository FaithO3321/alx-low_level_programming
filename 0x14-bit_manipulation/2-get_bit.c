#include "main.h"
/**
 * get_bit - retruns value of a bit at a given index
 * @index: index of the bit starting from 0
 * @n: number to be returned
 * Return: the value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
