 File  34 lines (31 sloc)  464 Bytes
   
#include "holberton.h"
ble File  34 lines (31 sloc)  464 Bytes
   
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - range of arrays
 * @min: min of arrange
 * @max: max of arrays
 * Return: int value
 */
int *array_range(int min, int max)
{
  int i;
  int *t;
  int len;

  if (min > max)
    return (NULL);
  len = 0;
  for (i = min; i <= max; i++)
    len++;

  t = malloc(sizeof(int) * len);
  if (t == NULL)
    return (NULL);

  i = 0;
  while (min <= max)
  {
    t[i] = min;
    i++;
    min++;
  }
  return (t);
}

3-array_range.c
