#include "main.h"

/**
 * _islower - Entry point
 * @c: input is a char
 * Description: checks if character is Lowercase
 * Return: 1 if is lowercase else 0
 */

int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
