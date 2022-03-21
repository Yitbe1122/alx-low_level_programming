#include "main.h"
/**
 *print_rev-prints a string to stdout in reverse
 *@s:string to be printed in reverse,
 *Return:void.
 */

void print_rev(char *s)
{
	int p, k;

/*First determine the size of the string*/
	while (*(s + p) != 0)
	{
		p++;
	}
	for (k = p - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
