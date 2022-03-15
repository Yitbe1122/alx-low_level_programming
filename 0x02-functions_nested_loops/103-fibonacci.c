#include <stdio.h>

/**
 *main-prints first 50 fibbonacci numbers.
 *Return:void.
 */

int main(void)
{
	long int i, first = 1, second = 2, next = 0, sum = 2;

	for (i = 0; i < 40; i++)
	{
		if (next <= 4000000)
		{
			next = second + first;
			first = second;
			second = next;
			if (next % 2 == 0)
			{
				sum = sum + next;
			}
		}
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
