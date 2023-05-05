#include "main.h"

/**
 * get_endianness - checks the endianness of a machine if big or little
 *
 * Return 0 for big endian, and return 1 for little endian
 * /
 *
 * int get_endianness(void)
{
	int x;
	char *y;

	x = 1;
	y = (char *)&x;
	return (*y);
}
