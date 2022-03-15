#include <stdio.h>

/**
 *main-prints first 50 fibbonacci numbers.
 *Return:void.
 */

int main(void)
{
	double i, first = 1, second = 2, next;

	printf("%0.0f", first);
	printf(",");
	printf(" ");
	printf("%0.0f", second);
	printf(",");
	printf(" ");

	for (i = 0; i < 96; i++)
	{
		next = second + first;
		first = second;
		second = next;
		printf("%0.0f", next);
		if (i == 95)
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
