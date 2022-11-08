#include "main.h"

/**
 * _memcpy - A function that copied memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: Number of bytes
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int index;

	int revs = n;

	for (index = 0; index < revs; index++)
	{
		dest[index] = src[index];
		n--;
	}
	return (dest);
}
