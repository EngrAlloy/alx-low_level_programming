#include <stdio.h>
#include "main.h"

/**                                                                                                                                                    
 * main - print using printf function                                                                                                               
 * Return: Alway 0 when successful
 */                                                                                                              

int main(void)                                                                                                                                         
{
	char str[] = "Look up!\n";
	char *ptr;
	
	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
	
}
