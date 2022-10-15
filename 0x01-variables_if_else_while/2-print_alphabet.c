#include <stdio.h>
/**
 * main - prints alphabeth in lower case using putchar function
 *
 * Return: Alway 0 when successful
 */
int main(void)
{
	char lca;

	for (lca = 'a'; lca <= 'z'; lca++)
	{
		putchar(lca);
	}
	putchar("\n");
	return (0);
}
