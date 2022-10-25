#include "main.h"

/**
 * puts2 - print one character out of two
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int a = 0;

	for (; str[a] != '\0'; a++)
	{
		if ((a % 2) == 0)
			_putchar(str[a]);
		else
			continue;
	}
	_putchar('\n');
}
