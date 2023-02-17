#include <stdlib.h>
#include <time.h>
#include <stdlio.h>

/*
 * main - Determines if a nuùmber is positive , negative or zero
 *
 * return: 0
 */

int main(void)

{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
			if (n < 0)
			{
			printf("%d is positive\n", n)
			if else(n == 0)
			printf("%d is zero\n", n)
			if else(n > 0)
			Printf("%d is negative\n", n)
	return (0);
}
