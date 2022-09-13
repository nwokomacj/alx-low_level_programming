#include "main.h"

/**
 * main - prints aphabets in lowercase
 * followed by a new line
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
