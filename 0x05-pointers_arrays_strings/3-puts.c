#include "main.h"
/**
 *_puts-prints a string to stdout.
 *@str:string to be printed,
 *Return:void.
 */

void _puts(char *str)
{
	int p, k;
/*First determine the size of the string*/
	while (*(str + p) != 0)
	{
		p++;
	}
	for (k = 0; k < p; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
