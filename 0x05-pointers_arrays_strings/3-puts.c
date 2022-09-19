#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	int a;

	while (str[a] != '\0')
	{
		a++;
		_putchar(str[a]);
	}
	_putchar('\n');
}
