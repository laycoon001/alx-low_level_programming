#include "main.h"
int _putchar(char c);
/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
{
		_putchar(c + '0');
}
	_putchar('\n');
}
