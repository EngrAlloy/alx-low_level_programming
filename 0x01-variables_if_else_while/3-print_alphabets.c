#include <stdio.h>
/**
 * main - prints alphabeth in lower and uppercase using putchar function
 *
 * Return: Always 0 when successful
 */
int main(void)
{
	char lu;

	for (lu = 'a'; lu <= 'z'; lu++)
	{
		putchar (lu);
	}

	for (lu = 'A'; lu <= 'Z'; lu++)
	{
		putchar (lu);
	}
	putchar('\n');
	return (0);
}
