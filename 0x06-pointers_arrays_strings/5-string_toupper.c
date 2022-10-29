#include "main.h"

/**
 * string_toupper - chnages lowercase to uppercase
 * @n: pointer
 * Return: char
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;

	while (n[i])
	{
		if (n[i] >= 'a' && n[i] <= 'z')

			n[i] -= 32;
			i++;
	}
	return (n);
}
