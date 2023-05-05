#include "main.h"

/**
 * flip_bits - counts the number of bits to change from one number to another
 * @n:  First Number
 * @m:  Second Number
 * Return: the number of bits to flip to go
 * from one number to the other
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, check;
	unsigned int count, i;

	count = 0;
	check = 1;
	diff = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (check == (diff & check))
			count++;
		check <<= 1;
	}
	return (count);
}
