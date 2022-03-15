#include <stdio.h>

/**
 *main-prints first 50 fibbonacci numbers.
 *Return:void.
 */

int main(void)
{
	long int i, first = 1, second = 2, next;

	printf("%ld", first);
	printf(",");
	printf(" ");
	printf("%ld", second);
	printf(",");
	printf(" ");

	for (i = 0; i < 48; i++)
	{
		next = second + first;
		first = second;
		second = next;
		printf("%ld", next);
		if (i == 47)
		{
			break;
		}
		else
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
