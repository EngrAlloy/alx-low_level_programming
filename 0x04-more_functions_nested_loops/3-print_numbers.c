#include "main.h"

/**
 * print_numbers - print the number since 0 up to 9
 * Return: the number since 0 up to 9
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
