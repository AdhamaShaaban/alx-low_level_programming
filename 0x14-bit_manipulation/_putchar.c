#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the chrcter c to stdout
 * @c: print The chrcter
 *
 * Return: 1 On succes.
 * On fail, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
