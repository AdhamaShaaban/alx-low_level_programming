#include "main.h"

/**
 * set_bit - set bit of given index to 1
 * @n: pointer to number to change
 * @index: index bit to set it to 1
 *
 * Return: on success 1, on failure -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
