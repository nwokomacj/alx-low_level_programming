#include "unistd.h"

/**
 * main - prints aphabets in lowercase
 * followed by a new line
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
