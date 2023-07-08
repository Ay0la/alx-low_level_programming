#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0 at a given index.
 * @n: number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = ~(1 << index);
	*n = *n & set;
	return (1);
}

