#include <stdio.h>

/**
 *main-Program entry point.
 *Return:0-no error,non-zero value-if error.
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
