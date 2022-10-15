#include <stdio.h>
/**
 * main - print all strings from 0 to 9 using printf function
 *
 * Return: Always 0 when successful
 */
int main(void)
{
	int num;

	for (num = 0; num < 10;)
	{
		printf("%d", num);
		num = num + 1;
		printf("\n");
	}
	return (0);
}
