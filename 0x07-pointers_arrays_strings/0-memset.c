#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by @s with constant byte @c
 * @s: A pointer to the memory area to be filled
 * @b: The character to filled the memory area
 * @n: Number of bytes to be filled
 * Return: A pointer to the filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
	{
		memory[index] = value;
		return (memory);
	}

}
