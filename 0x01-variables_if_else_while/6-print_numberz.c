#include <stdio.h>
/**
 *main-program entry point.
 *Return:0 if no errors, non-zero if errors.
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
