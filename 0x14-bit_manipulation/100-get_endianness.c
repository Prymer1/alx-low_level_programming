#include "main.h"

/**
 * get_endianness - Checks the endianness (LSB/MSB)
 * Return: 0 If big-endian.
 * Or 1 If little-endian.
 */

int get_endianness(void)
{
	char *a;
	int b = 1;

	a = (char *)&b;

	return (*a);
}
