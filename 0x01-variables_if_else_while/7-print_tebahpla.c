#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse, using putchar function
 *
 * Return: Alway 0 when successful
 */
int main(void)
{
	char c;

	c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
