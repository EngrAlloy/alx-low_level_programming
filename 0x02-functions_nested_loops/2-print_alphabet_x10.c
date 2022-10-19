#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet
 * in lower case using _putchar
 *
 */
void print_alphabet_x10(void)
{
	char letter;

	int count = 0;

	while (count < 10)
	{
		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	}
	_putchar('\n');
	count++;
}
