#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main- assigns a new number to int n and checks if it is positive, negative
 * and zero. It executes and prints
 * Return: 0
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/*
					 *int n = 9;
					 *if n > 0;
					 *printf("%i",is positive/n);
					 *
					 *int n = 8;
					 *if n == 0;
					 *printf("%i",is zero/n);
					 *
					 *int n = 7;
					 *if n < 0;
					 *printf("%i",is negative/n)
					 *
					 */
					return (0);
}
