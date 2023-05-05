#include "main.h"

/**
 * set_bit- sets the value of a bit at a given index to 1
 * @n: number to set to 1
 * @index: index of the bit to set to 1
 *
 * Return: 1 when successful, -1 if there was an error and it was unsuccessful
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}
