#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: n is an integer
 *
 *Description: prints the last digit of a number
 * Return: integer
 */
int print_last_digit(int n)
{
	int j = n % 10;

	if (n < 10)
		j = j * -1;
	_putchar(j + '0')
		return (j);
}
