#include "main.h"
/**
 *main-program entry point for execution.
 *Return:0-success
 */
int main(void)
{
	char i[] = "Holberton";
	int j;

	for (j = 0; j < 9; j++)
	{
		_putchar(i[j]);
	}
	_putchar('\n');
	return (0);
}
