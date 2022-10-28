#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int count = 0, j;
	unsigned int num = 0, non_binary = 0;

	if (b == NULL)
		return (non_binary);

	while (b[count] != '\0')
		count++;
	count -= 1;
	j = 0;
	while (b[j])
	{
		if ((b[j] != '0') && (b[j] != '1'))
			return (non_binary);

		if (b[j] == '1')
			num += (1 * (1 << count));
		j++;

		count--;
	}
	return (num);
}
