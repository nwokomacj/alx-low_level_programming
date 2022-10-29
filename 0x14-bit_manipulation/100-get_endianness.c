/***
 * #include "main.h"

 * **
 * get_endianness - checks if multibyte data is the endianness.
 * Return: If big-endian - 0, if little-endian -1.
 *
 * int get_endianness(void)
 * {
 *	int number = 1;
 *	char *endian = (char *)&number;
 *
 *	if (*endian == 1)
 *		return (1);
 *	return (1);
 * }
 */

#include "main.h"

/**
* get_endianness - checks the endianness
* Return: 1 if its little endian
* otherwise, 0 for big endian architecture
*/
int get_endianness(void)
{
	unsigned int i = 1;
	char *byte = (char *) &i;

	return ((int) *byte);
}
