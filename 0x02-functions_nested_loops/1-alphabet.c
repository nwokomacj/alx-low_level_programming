#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: a function to print alphabet
 * Return: void
 */

void print_alphabet(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		_putchar(letters);
		letters++;
	}
	_putchar('\n');
}
