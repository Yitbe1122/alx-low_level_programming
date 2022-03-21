#include "main.h"

/**
 * puts2 - prints multiples of two.
 * @str: first parameter
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, len, start;

	len = 0;

	for (i = 0; str[i] != '\0'; ++i)
	{
		len = i;
	}

	for (start = 0; start <= len; start++)
	{
		if (start % 2 == 0)
			_putchar(str[start]);
		else
			continue;
	}

	_putchar('\n');
}
