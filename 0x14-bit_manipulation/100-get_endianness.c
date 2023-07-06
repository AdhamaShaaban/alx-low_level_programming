#include "main.h"

/**
 * get_endianness - check if the machine big or little  endian
 * Return: on big 0, on little 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
