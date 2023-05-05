#include "main.h"

/**
 * clear_bits sets the value of a given bit to 0 at a given index
 * @n: points to the number to change
 * @index denotes index at which to set bit
 *
 * Return 1 for success and Return -1 for failure when an error occurred
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
