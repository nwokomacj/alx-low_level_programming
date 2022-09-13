#include <unistd.h>

/**
 * main - prints _putchar, followed by a new line.
 * Return: Aways 0 (success)
 */
int main(void)
{
	write(1,"_putchar\n", 9);

	return (0);
}
