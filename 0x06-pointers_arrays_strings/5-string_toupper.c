#include "main.h"

/**
 * string_toupper - chnages lowercase to uppercase
 * @n: pointer
 * Return: char
 */

char *string_toupper(char *n)
{
	int i = 0;

	while (n[i])
	{
		if (n[i] >= 97 && n[i] <= 122)
			n[i] = n[i] - 32;
			i++;
	}
	return (n);
}
