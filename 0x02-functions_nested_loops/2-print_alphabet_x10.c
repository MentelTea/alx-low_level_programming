#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: Prints alpabets
 * Return: void
 */

void print_alphabet(void)
{
	char c:
	int i;	

	i = 1;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
