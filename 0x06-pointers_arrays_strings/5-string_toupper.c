#include "main.h"

/**
 * string_toupper - chnages lowercase to uppercase
 * @n: pointer
 * Return: char
 */

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] > 96 && n[i] < 123)
			n[i] -= 32;
	}
	return (n);
}
