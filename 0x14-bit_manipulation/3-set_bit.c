#include "main.h"

/**
 * set_bit - set bit at index to be 1
 * @n: pointer to num to change
 * @index: bit index set to 1
 *
 * Return: 1 on success, on failure -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
