#include "main.h"

/**
 * write a function that prints the binary representation of a number
 * @Y: number to print in binary
 * print_bnary - prints the equivalent of a decimal number
 */
void print_binary(unsigned long int Y)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0;  i--)
	{
		current = Y >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
