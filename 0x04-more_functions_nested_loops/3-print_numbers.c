#include "main.h"

/**
 * print_numbers - print 0 - 9
 * only using _putchar twice
 *
 * Return: Always 0 (success)
*/

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_puthar(c);
	}
	_putchar('\n');
}
