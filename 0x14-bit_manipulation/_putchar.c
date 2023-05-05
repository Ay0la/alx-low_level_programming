#include "main.h"
#include <unistd.h>

/**
 * _putchar simply writes the character to stdout
 * @c denoted the character to print
 *
 * Return 1 on success, Return -1 on error and erno is set appropriately.
 * /
 *
 int_putchar(char c)
 {
 	return (write(1, &c, 1));
}
