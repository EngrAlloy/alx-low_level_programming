#include <stdio.h>
/**
 * main - prints the alpha in lower case followed by a new line except q & e
 *
 * Return: Always 0 when successful
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e' && lc != 'q')
			putchar(lc);
	}
	putchar('\n');
	return (0);
}

