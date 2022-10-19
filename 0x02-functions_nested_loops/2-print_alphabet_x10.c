#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet
 * in lower case using _putchar
 *
 */
void print_alphabet_x10(void)
{
	char lc;

	int count = 0;

	while (count <= 9)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
		{
			_putchar(lc);
		}
	}
	_putchar('\n');
}
