#include "main.h"

/**
 * clear_bit - set value of given bit to 0
 * @n: pointer to number to be change
 * @index: index bit to clear
 *
 * Return: on success 1, on failure -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
