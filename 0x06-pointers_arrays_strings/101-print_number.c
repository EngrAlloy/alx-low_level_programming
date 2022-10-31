#include "main.h"
#include <stdio.h>

/**
 * print_number - print an integer
 * @n: the integer to be printed
 * Return: Alway 0 when successful
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
	{
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
	}
}
