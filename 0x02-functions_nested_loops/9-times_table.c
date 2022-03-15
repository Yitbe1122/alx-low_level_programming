#include "main.h"
/**
 * times_table - prints the by 9 table.
 *
 * Description: prints all the nine table
 * Return: Always(0) Success
 */
void times_table(void)
{
int result;
int step;
int initial;
int last_value;
int k;

k = 0;
step = 0;
last_value = 9;

do {

for (initial = 0; initial <= last_value; initial++)
{
result = initial * step;
if (result <= 9)
{
_putchar(result + '0');
}
else
{
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
if (initial == 9)
{
break;
}
else
{
_putchar(',');
_putchar(' ');

}

}
_putchar('\n');
step += 1;
k += 1;

} while (k <= 9);
}
