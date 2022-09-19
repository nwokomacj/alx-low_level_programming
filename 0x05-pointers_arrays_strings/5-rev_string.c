#include "main.h"

/**
 * rev_string - reverses a string
 * @: string to be reversed
 */
void rev_string(char *s)
{
	char i;
	int j, k, l;

	k = 0;
	l = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	l = k - 1;

	for (j = 0; j < k / 2; j++)
	{
		i = s[i];
		s[i] = s[l];
		s[l--] = i;
	}
}
