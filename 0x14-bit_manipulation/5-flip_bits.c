#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip to get from
 *             one number to another.
 *
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int rbits;

	for (rbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			rbits++;
	}

	return (rbits);
}
