#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 * flipped to get from one to another.
 * @n: the number
 * @m: the number to flip n to.
 *
 * Return: number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int btw, check;
	unsigned int num, i;

	check = 1;
	btw = n ^ m;
	num = 0;


	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (check == (btw & check))
			num++;
		check <<= 1;
	}

	return (num);
}
