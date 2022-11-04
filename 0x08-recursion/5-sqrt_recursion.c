#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the natural square root of a number
 * @num: the number to find the square root
 * @root: the root to be tested
 * Return: square root if the number has natural square root
 * -1 if it does not
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
}

