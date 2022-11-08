#include "main.h"


/**
 * _strchr - function that locate character in a string
 * @s: input
 * @c: input
 * Return: Alway 0 success
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (&s[index]);
	}
	return (0);
}
